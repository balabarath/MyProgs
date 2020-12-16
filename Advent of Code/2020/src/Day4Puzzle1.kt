import java.io.File
import kotlin.collections.mutableMapOf as mutableMapOf

fun main(args: Array<String>) {
    val inputs: List<String> = File("AOCDay4_input.txt").readLines()
    var collectedDetails = mutableSetOf<String>()
    var validPassport = 0
    for(input in inputs){
        if(input.equals("")){
            if(checkPassportValidity(collectedDetails)){
                validPassport++
            }
            collectedDetails = mutableSetOf<String>()
        }
        else{
            for (detail in input.split(" ")){
                val detailArray = detail.split(":")
                collectedDetails.add(detailArray[0])
            }
        }
    }
    if(checkPassportValidity(collectedDetails)){
        validPassport++
    }
    println(message = "Answer $validPassport")
}

fun checkPassportValidity(details: MutableSet<String>): Boolean {
    val requiredDetails = listOf<String>("byr", "iyr", "eyr", "hgt", "hcl", "ecl", "pid")
    for(requiredDetail in requiredDetails){
        if(!details.contains(requiredDetail)){
            return false
        }
    }
    return true
}