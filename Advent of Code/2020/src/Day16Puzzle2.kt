import java.io.File

fun main(args: Array<String>) {
    val inputs: List<String> = File("AOCDay16_input.txt").readLines()
    var rules = mutableListOf<Rule>()
    for((idx, input) in inputs.withIndex()){
        if(input == ""){
            break
        }
        else{
            val matchResult = Regex("(\\w+[\\s\\w]*): (\\d+)-(\\d+) or (\\d+)-(\\d+)").matchEntire(input)
            if(matchResult != null){
                val name = matchResult.groupValues[1]
                val minFirstRange = matchResult.groupValues[2].toInt()
                val maxFirstRange = matchResult.groupValues[3].toInt()
                val minSecondRange = matchResult.groupValues[4].toInt()
                val maxSecondRange = matchResult.groupValues[5].toInt()
                rules.add(Rule(name, minFirstRange, maxFirstRange, minSecondRange, maxSecondRange))
            }
            else{
                println("$input is not matching regex")
            }
        }
    }
    var positionRulesMap = mutableMapOf<Int,MutableList<Rule>>()

    val yourTicket = inputs[rules.size+2].split(",").map { it.toInt() }
    for((idx,_) in yourTicket.withIndex()){
        positionRulesMap.put(idx,mutableListOf<Rule>())
        positionRulesMap[idx]?.addAll(rules)
    }
    reduceRules(yourTicket,positionRulesMap)

    var skipInput = true
    for(input in inputs){
        if(input == "nearby tickets:"){
            skipInput = false
            continue
        }
        if(!skipInput){
            val ticket = input.split(",").map { it.toInt() }
            if(isValidTicket(ticket, rules)){
                reduceRules(ticket,positionRulesMap)
            }
        }
    }

    var processedPositions = mutableListOf<Int>()
    while (processedPositions.size < rules.size){
        for((key,value) in positionRulesMap){
            if(!processedPositions.contains(key)){
                if(value.size == 1){
                    removeRuleFromOtherPosition(key, value[0], positionRulesMap)
                    processedPositions.add(key)
                }
            }
        }
    }

    var ans: Long = 1
    for((key,value) in positionRulesMap){
        if(value[0].name.startsWith("departure")){
            ans *= yourTicket[key]
        }
    }

    println("Answer $ans")

}

fun removeRuleFromOtherPosition(currentPosition: Int, rule: Rule, positionRulesMap: MutableMap<Int,MutableList<Rule>>) {
    for((key,value) in positionRulesMap){
        if(key != currentPosition){
            value.remove(rule)
        }
    }
}

fun isValidTicket(ticket: List<Int>, rules: List<Rule>): Boolean{
    for(tnumber in ticket){
        var valid = false
        for(rule in rules){
            if(rule.isValid(tnumber)){
                valid = true
                break
            }
        }
        if(!valid){
            return false
        }
    }
    return true
}

fun reduceRules(ticket: List<Int>, positionRulesMap: MutableMap<Int,MutableList<Rule>>){
    for((idx,tnumber) in ticket.withIndex()){
        var failingRules = mutableListOf<Rule>()
        for(rule in (positionRulesMap[idx]?: listOf<Rule>())){
            if(!rule.isValid(tnumber)){
                failingRules.add(rule)
            }
        }
        positionRulesMap[idx]?.removeAll(failingRules)
    }
}