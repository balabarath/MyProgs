import java.io.File

fun main(args: Array<String>) {
    val inputs: List<String> = File("AOCDay19_input.txt").readLines()
    var  rules = mutableMapOf<String,String>()
    var inputType = "Read Rules"
    var ans = 0
    for(input in inputs){
        if(input == ""){
            inputType = "Read Messages"
        }
        else if(inputType == "Read Rules"){
            val parts = input.split(": ")
            rules[parts[0]] = parts[1]
        }
        else{
            val results = matchRule(input,rules["0"]?:"",0, rules).filter { it.first && it.second == input.length }
            if(results.size > 0){
                ans++
            }
        }
    }
    println(message = "Answer $ans")
}

fun matchRule(message: String, rule: String, pos: Int, rules: Map<String,String>): List<Pair<Boolean,Int>>{
//    println("Rule $rule $message $pos")
    if(message.length <= pos){
        return listOf(Pair(false,0))
    }
    val stringMatcher = Regex("\"([ab])\"").matchEntire(rule)
    if(stringMatcher != null){
        return listOf(Pair(message[pos] == stringMatcher.groupValues[1][0],pos+1))
    }
    else if(rule.contains("|")){
        val results = mutableListOf<Pair<Boolean,Int>>()
        val subRules = rule.split(" | ")
        for(subRule in subRules){
            results.addAll(matchRule(message,subRule,pos,rules));
        }
        return results
    }
    else{
        val subRules = rule.split(" ")
        var results = mutableListOf<Pair<Boolean,Int>>()
        results.addAll(matchRule(message,rules[subRules[0]]?:"",pos,rules).filter { it.first })
        for (idx in 1 until subRules.size){
            if(results.size == 0){
                return listOf(Pair(false,0))
            }
            var subResults = mutableListOf<Pair<Boolean,Int>>()
            for(result in results){
                if(message.length > result.second) {
                    subResults.addAll(
                        matchRule(
                            message,
                            rules[subRules[idx]]?:"",
                            result.second,
                            rules
                        ).filter { it.first })
                }
            }
            results = subResults
        }
        if(results.size == 0){
            return listOf(Pair(false,0))
        }
        return results
    }
}