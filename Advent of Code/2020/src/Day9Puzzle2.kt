import java.io.File

fun main(args: Array<String>) {
    val inputs: List<Long> = File("AOCDay9_input.txt").readLines().map{ it.toLong() }
    val invalidNumber : Long= 14360655
    var ans: Long = 0
    outer@ for(i in 0 until inputs.size){
        var sum: Long = 0
        var min = inputs[i]
        var max = inputs[i]
        for( j in i until inputs.size){
            sum += inputs[j]
            if(min > inputs[j]){
                min = inputs[j]
            }
            if(max < inputs[j]){
                max = inputs[j]
            }
            if(sum == invalidNumber){
                ans = min + max
                break@outer
            }
            if(sum > invalidNumber){
                break
            }
        }
    }
    println(message = "Answer $ans")
}