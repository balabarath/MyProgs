import java.io.File

fun main(args: Array<String>) {
    val inputs: List<Int> = File("AOCDay1_input.txt").readLines().map{ it.toInt() }
    val expectedValues: MutableSet<Int> = mutableSetOf()
    var ans: Int = 0
    for(input in inputs){
        if(expectedValues.contains(input)) {
            println("The numbers are $input "+(2020 - input))
            ans = input * (2020 - input)
            break
        }
        else
            expectedValues.add(2020 - input)
    }
    println(message = "Answer $ans")
}
