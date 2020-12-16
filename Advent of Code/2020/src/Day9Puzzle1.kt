import java.io.File

fun main(args: Array<String>) {
    val inputs: List<Long> = File("AOCDay9_input.txt").readLines().map{ it.toLong() }
    var ans: Long = 0
    for(index in 25 until inputs.size){
        var valid = false
        val number = inputs[index]
        outer@ for (i in index-25 until index) {
            for( j in i+1 until index){
                if( inputs[i]+inputs[j] == number){
                    valid = true
                    break@outer
                }
            }
        }
        if (!valid) {
            ans = number
            break
        }
    }
    println(message = "Answer $ans")
}