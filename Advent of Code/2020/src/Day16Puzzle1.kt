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
    val errors = mutableListOf<Int>()
    var skipInput = true
    for(input in inputs){
        if(input == "nearby tickets:"){
            skipInput = false
            continue
        }
        if(!skipInput){
            for(tnumber in input.split(",").map { it.toInt() }){
                var valid = false
                for(rule in rules){
                    if(rule.isValid(tnumber)){
                        valid = true
                        break
                    }
                }
                if(!valid){
                    errors.add(tnumber)
                }
            }
        }
    }
    println(errors)
    println("Answer : ${errors.sumBy { it }}")
}

class Rule(val name: String, val minFirstRange: Int, val maxFirstRange: Int, val minSecondRange: Int, val maxSecondRange: Int){
    fun isValid(number: Int): Boolean{
        return (this.minFirstRange <= number && this.maxFirstRange >= number) || (this.minSecondRange <= number && this.maxSecondRange >= number);
    }

    override fun toString(): String {
        return name
    }
}