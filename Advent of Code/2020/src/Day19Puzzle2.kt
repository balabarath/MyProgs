import java.io.File

fun main(args: Array<String>) {
    val inputs: List<String> = File("AOCDay19_input.txt").readLines()
    var  rules = mutableMapOf<String,String>()
    var inputType = "Read Rules"
    var ans = 0
    for(input in inputs){
        if(input == ""){
            rules["8"] = "42 | 42 8"
            rules["11"] = "42 31 | 42 11 31"
            inputType = "Read Messages"
        }
        else if(inputType == "Read Rules"){
            val parts = input.split(": ")
            rules[parts[0]] = parts[1]
        }
        else{
            val results = matchRule(input,rules["0"]?:"",0, rules).filter { it.first && it.second == input.length }
            if(results.size > 0){
                ans++
            }
        }
    }
    println(message = "Answer $ans")
}
