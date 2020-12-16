import java.io.File

fun main(args: Array<String>) {
    val sequence: List<Instruction> = File("AOCDay8_input.txt").readLines().map{
        val inputParts = it.split(" ")
        Instruction(inputParts[0], inputParts[1].toInt())
    }

    var ans = 0
    val nonAccInstructions = sequence.filter { it.operation != "acc" }

    for(instruction in nonAccInstructions){
        resetSequence(sequence)
        instruction.isCorrupted = true
        val (accumulator,loop) = exec(sequence)
        //println("${instruction.operation} ${instruction.argument} $accumulator $loop")
        if(!loop){
            ans = accumulator
            break
        }
    }



    println(message = "Answer $ans")
}

fun exec(sequence: List<Instruction>): Pair<Int, Boolean> {
    var accumulator = 0
    var pointer = 0
    var loop = false
    while (pointer < sequence.size && pointer >= 0){
        val instruction = sequence[pointer]
        //println("$pointer ${instruction.operation} ${instruction.argument} $accumulator")
        if(instruction.isExecuted){
            loop = true
            break
        }
        instruction.isExecuted = true
        if((instruction.operation == "jmp" && !instruction.isCorrupted) || (instruction.operation == "nop" && instruction.isCorrupted) ){
            pointer += instruction.argument
            continue
        }
        if(instruction.operation == "acc"){
            accumulator += instruction.argument
        }
        pointer++
    }
    return Pair(accumulator, loop)
}

fun resetSequence(sequence: List<Instruction>){
    for (instruction in sequence){
        instruction.isExecuted = false
        instruction.isCorrupted = false
    }
}