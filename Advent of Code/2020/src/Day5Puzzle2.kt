import java.io.File
import java.util.*

fun main(args: Array<String>) {
    val inputs: List<String> = File("AOCDay5_input.txt").readLines()
    var seatIds: MutableList<Int> = mutableListOf()
    var mySeatId = 0
    var prev = -1
    for(input in inputs){
        val seatId = calculateSeatId(input)
        //println(seatId)
        seatIds.add(seatId)
    }
    seatIds.sort()
    for(seatId in seatIds){
        println(seatId)
        if(prev+2 == seatId){
            mySeatId = prev+1
            break
        }
        prev = seatId
    }
    println(message = "Answer $mySeatId")
}
