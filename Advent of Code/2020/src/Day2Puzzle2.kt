import java.io.File

fun main(args: Array<String>) {
    val inputs: List<String> = File("AOCDay2_input.txt").readLines()
    var validPasswordCount : Int = 0
    for (input in inputs){
        if (validPasswordNew(input)){
            validPasswordCount++
        }
    }
    println("Total Password "+ inputs.size)
    println("Valid Passwords count "+validPasswordCount)
}

fun validPasswordNew(input: String): Boolean {
    val pattern = Regex("(\\d+)-(\\d+) (\\w): (\\w+)")
    val matchResult = pattern.matchEntire(input)
    if(matchResult != null){
        val position1 = matchResult.groupValues[1].toInt()-1
        val position2 = matchResult.groupValues[2].toInt()-1
        val checkChar = matchResult.groupValues[3][0]
        val password = matchResult.groupValues[4]
        //println(" p1:"+(password[position1] == checkChar)+" p2:"+(password[position2] == checkChar)+" Rs:"+((password[position1] == checkChar) xor (password[position2] == checkChar)))
        return (password[position1] == checkChar) xor (password[position2] == checkChar)
    }
    return false;
}
