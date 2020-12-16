import java.io.File

fun main(args: Array<String>) {
    val inputs: List<Int> = File("AOCDay10_input.txt").readLines().map{ it.toInt() }.sorted()

    //println(inputs)

    var oneDiffs = 0
    var threeDiffs = 0
    var prev = 0

    for(i in inputs){
        if(i - prev == 1){
            oneDiffs++
        }
        else if(i - prev == 3){
            threeDiffs++
        }
        prev = i
    }
    threeDiffs++

    println(" oneDiffs $oneDiffs  threeDiffs $threeDiffs")
    println(message = "Answer ${oneDiffs*threeDiffs}")
}