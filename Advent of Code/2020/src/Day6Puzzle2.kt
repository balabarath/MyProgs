import java.io.File
import kotlin.collections.Set as Set
import kotlin.collections.mutableMapOf as mutableMapOf

fun main(args: Array<String>) {
    val inputs: List<String> = File("AOCDay6_input.txt").readLines()
    var listOfAnswers = mutableListOf<Set<Char>>()
    var sum = 0
    for(input in inputs){
        if(input.equals("")){
            sum += calcIntersect(listOfAnswers)
            listOfAnswers = mutableListOf<Set<Char>>()
        }
        else{
            listOfAnswers.add(input.toSet())
        }
    }
    sum += calcIntersect(listOfAnswers)
    println(message = "Answer $sum")
}

fun calcIntersect(listOfAnswers: List<Set<Char>>): Int {
    var commonAnswers = mutableSetOf<Char>()
    for((index,answers) in listOfAnswers.withIndex()){
        if(index == 0){
            commonAnswers.addAll(answers)
        }
        else{
            val interSect = commonAnswers.intersect(answers)
            commonAnswers.clear()
            commonAnswers.addAll(interSect)
        }
    }
    //println(commonAnswers)
    return commonAnswers.size
}