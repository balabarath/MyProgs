import java.io.File

fun main(args: Array<String>) {
    val inputs: List<String> = File("AOCDay2_input.txt").readLines()
    var validPasswordCount : Int = 0
    for (input in inputs){
        if (validPassword(input)){
            validPasswordCount++
        }
    }
    print("Total Password "+ inputs.size)
    println("Valid Passwords count "+validPasswordCount)
}

fun validPassword(input: String): Boolean {
    val pattern = Regex("(\\d+)-(\\d+) (\\w): (\\w+)")
    val matchResult = pattern.matchEntire(input)
    if(matchResult != null){
        val minCount = matchResult.groupValues[1].toInt()
        val maxCount = matchResult.groupValues[2].toInt()
        val count = charCountInPassword(matchResult.groupValues[4], matchResult.groupValues[3][0])
        return count >= minCount && count <= maxCount;
    }
    return false;
}

fun charCountInPassword(word: String, c: Char): Int{
    var count = 0
    for( wc in word.toCharArray()){
        if(c == wc){
            count++
        }
    }
    return count
}