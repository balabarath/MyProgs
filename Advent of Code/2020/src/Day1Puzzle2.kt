import java.io.File

fun main(args: Array<String>) {
    val inputs: List<Int> = File("AOCDay1_input.txt").readLines().map{ it.toInt() }
    var ans: Int = 0
    outerloop@ for(fidx in 0..inputs.size-1){
        if(inputs[fidx] <= 2020) {
            for (sidx in 1..inputs.size-1) {
                if (inputs[fidx] + inputs[sidx] <= 2020) {
                    for(tidx in 2..inputs.size-1){
                        if(inputs[fidx]+inputs[sidx]+inputs[tidx] == 2020){
                            ans = inputs[fidx]*inputs[sidx]*inputs[tidx]
                            println("Values are "+inputs[fidx]+" "+inputs[sidx]+" "+inputs[tidx])
                            break@outerloop
                        }
                    }
                }
            }
        }
    }
    println(message = "Answer $ans")
}