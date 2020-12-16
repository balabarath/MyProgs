import java.io.File

class Traversal(val right: Int, var top:Int) {
    var pos: Int = 0
    var treesEncountered: Int = 0
}

fun main(args: Array<String>) {
    val inputs: List<String> = File("AOCDay3_input.txt").readLines()
    val traversalList = listOf<Traversal>(
        Traversal(1,1), Traversal(3,1), Traversal(5,1),Traversal(7,1),Traversal(1,2)
    )
    for((index, input) in inputs.withIndex()){
        for( traversal in traversalList){
            if(index%traversal.top == 0){
                if( input.get(traversal.pos % input.length) == '#')
                    traversal.treesEncountered++
                traversal.pos += traversal.right
            }
        }
    }
    var ans = 1
    for( traversal in traversalList){
        println(traversal.treesEncountered)
        ans *= traversal.treesEncountered
    }
    println(message = "Answer $ans")
}