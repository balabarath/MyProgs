import java.io.File

fun main(args: Array<String>) {
    val inputs: List<String> = File("AOCDay12_input.txt").readLines()
    var distanceMap = mutableMapOf<String,Int>(Pair("N",0), Pair("E",0), Pair("S",0), Pair("W",0))
    var currentDirection = "E"
    for(input in inputs){
        val matchResult = Regex("([NEWSFLR])(\\d+)").matchEntire(input)
        if(matchResult != null){
            val direction = matchResult.groupValues[1]
            val value = matchResult.groupValues[2].toInt()
            if( listOf("L","R").contains(direction)){
                currentDirection = switchDirection(currentDirection, direction, value)
            }
            else if(listOf("N","E","S","W").contains(direction)){
                distanceMap[direction] = (distanceMap[direction]?:0)+value
            }
            else{
                distanceMap[currentDirection] = (distanceMap[currentDirection]?:0)+value
            }
        }
        else{
            println("$input regex not matching")
        }
    }
    val ew = diff(distanceMap["E"]?:0,distanceMap["W"]?:0)
    val ns = diff(distanceMap["N"]?:0,distanceMap["S"]?:0)
    println("$ew $ns")
    println(message = "Answer ${ew+ns}")
}

fun switchDirection(currentDirection: String, turningDirection: String, angle: Int): String{
    val directions = listOf("N", "E", "S", "W")
    val shifts = angle/90
    var index = directions.indexOf(currentDirection)
    if(turningDirection == "L" ) {
        index = index-shifts+4
    } else {
        index += shifts
    }
    return directions[index%4]
}

fun diff(a: Int, b: Int): Int{
    if(a > b) return  a-b else return b-a
}
