import java.io.File

fun main(args: Array<String>) {
    val inputs: List<String> = File("AOCDay12_input.txt").readLines()
    var distanceMap = mutableMapOf<String,Int>(Pair("N",0), Pair("E",0), Pair("S",0), Pair("W",0))
    var wayPointsMap = mutableMapOf<String,Int>(Pair("N",1), Pair("E",10), Pair("S",0), Pair("W",0))
    for(input in inputs){
        val matchResult = Regex("([NEWSFLR])(\\d+)").matchEntire(input)
        if(matchResult != null){
            val direction = matchResult.groupValues[1]
            val value = matchResult.groupValues[2].toInt()
            if( listOf("L","R").contains(direction)){
                shiftWayPoints(wayPointsMap, direction, value)
            }
            else if(listOf("N","E","S","W").contains(direction)){
                wayPointsMap[direction] = (wayPointsMap[direction]?:0)+value
            }
            else{
                for(direction in listOf("N","E","S","W")) {
                    distanceMap[direction] = (distanceMap[direction] ?: 0) + value * (wayPointsMap[direction] ?: 0)
                }
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

fun shiftWayPoints(wayPointsMap: MutableMap<String,Int>, turningDirection: String, angle: Int){
    val currentValues = listOf(wayPointsMap["N"]?:0,wayPointsMap["E"]?:0,wayPointsMap["S"]?:0,wayPointsMap["W"]?:0)
    val newValues = mutableListOf<Int>(0,0,0,0)
    val shifts = angle/90
    for( index in 0 until 4) {
        if (turningDirection == "L") {
            newValues[(index - shifts + 4)%4] = currentValues[index]
        } else {
            newValues[(index + shifts )%4] = currentValues[index]
        }
    }
    wayPointsMap["N"] = newValues[0]
    wayPointsMap["E"] = newValues[1]
    wayPointsMap["S"] = newValues[2]
    wayPointsMap["W"] = newValues[3]
}