import java.io.File

fun main(args: Array<String>) {
    val inputs: List<String> = File("AOCDay13_input.txt").readLines()
    val st = inputs[0].toInt()
    var minDiff = Int.MAX_VALUE
    var selectedBusId = -1
    for(busId in inputs[1].split(",")){
        if(busId != "x"){
            val diffMins = busId.toInt() - (st % busId.toInt())
            if(diffMins < minDiff){
                minDiff = diffMins
                selectedBusId = busId.toInt()
            }
        }
    }
    println("selectedBusId $selectedBusId minDiff $minDiff")
    println(message = "Answer ${minDiff*selectedBusId}")
}