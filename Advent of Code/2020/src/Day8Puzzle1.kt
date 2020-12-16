import java.io.File

fun main(args: Array<String>) {
    val sequence: List<Instruction> = File("AOCDay8_input.txt").readLines().map{
        val inputParts = it.split(" ")
        Instruction(inputParts[0], inputParts[1].toInt())
    }
    var accumulator = 0
    var pointer = 0
    while (pointer < sequence.size){
        val instruction = sequence[pointer]
        //println("$pointer ${instruction.operation} ${instruction.argument} $accumulator")
        if(instruction.isExecuted){
            break
        }
        instruction.isExecuted = true
        if(instruction.operation == "jmp"){
            pointer += instruction.argument
            continue
        }
        if(instruction.operation == "acc"){
            accumulator += instruction.argument
        }
        pointer++
    }

    println(message = "Answer $accumulator")
}

class Instruction(val operation: String, val argument: Int){
    var isExecuted: Boolean = false
    var isCorrupted = false
}