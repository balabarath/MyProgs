import java.io.File


fun main(args: Array<String>) {
    val inputs: List<String> = File("AOCDay14_input.txt").readLines()
    var values = mutableMapOf<Long,Long>()
    var orValue: Long = 0
    var andValue: Long = 0
    for (input in inputs){
        val matchResult = Regex("mem\\[(\\d+)\\] = (\\d+)").matchEntire(input)
        if(matchResult != null){
            values.put(matchResult.groupValues[1].toLong(),matchResult.groupValues[2].toLong().and(andValue).or(orValue))
        }
        else{
            val mask = calculateMask(input.split(" = ")[1])
            orValue = mask.first
            andValue = mask.second
        }
    }
    var ans: Long = 0
    for((key,value) in values){
        ans += value
    }
    println("Answer ${ans}")
}

fun calculateMask(mask: String): Pair<Long,Long>{
    var orValue: Long = 0
    var andValue:Long = 0
    var mul:Long = 1
    for(bit in mask.toCharArray().reversed()){
        if(bit != '0'){
            andValue = andValue or mul
        }
        if(bit == '1'){
            orValue = orValue or mul
        }
        mul *= 2
    }
    return Pair(orValue, andValue)
}