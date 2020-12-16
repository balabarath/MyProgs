import java.io.File

fun main(args: Array<String>) {
    val inputs: List<String> = File("AOCDay5_input.txt").readLines()
    var maxSeatId: Int = 0
    for(input in inputs){
        val seatId = calculateSeatId(input)
        println(seatId)
        if(seatId > maxSeatId){
            maxSeatId = seatId
        }
    }
    println(message = "Answer $maxSeatId")
}

fun calculateSeatId(boardingPass: String) : Int {
    var seatId: Int = 0
    for( char in boardingPass.toCharArray()){
        seatId *= 2
        if(char == 'B' || char == 'R')
            seatId++
    }
    return seatId
}