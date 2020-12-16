import java.io.File

fun main(args: Array<String>) {
    val inputs: List<String> = File("AOCDay3_input.txt").readLines()
    var treesEncountered: Int = 0
    var pos = 0
    for(input in inputs){
        if( input.get(pos % input.length) == '#')
            treesEncountered++
        pos+=3
    }
    println(message = "Answer $treesEncountered")
}