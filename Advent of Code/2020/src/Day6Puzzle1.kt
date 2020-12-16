import java.io.File
import kotlin.collections.mutableMapOf as mutableMapOf

fun main(args: Array<String>) {
    val inputs: List<String> = File("AOCDay6_input.txt").readLines()
    var distinctAnswers = mutableSetOf<Char>()
    var sum = 0
    for(input in inputs){
        if(input.equals("")){
            sum += distinctAnswers.size
            distinctAnswers = mutableSetOf<Char>()
        }
        else{
            distinctAnswers.addAll(input.toCharArray().asList())
        }
    }
    sum += distinctAnswers.size
    println(message = "Answer $sum")
}
