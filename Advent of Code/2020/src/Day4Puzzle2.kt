import java.io.File
import kotlin.collections.mutableMapOf as mutableMapOf

fun main(args: Array<String>) {
    val inputs: List<String> = File("AOCDay4_input.txt").readLines()
    var collectedDetails = mutableMapOf <String,String>()
    var validPassport = 0
    for(input in inputs){
        if(input.equals("")){
            if(checkPassportValidityNew(collectedDetails)){
                validPassport++
            }
            collectedDetails = mutableMapOf<String,String>()
        }
        else{
            for (detail in input.split(" ")){
                val detailArray = detail.split(":")
                collectedDetails.put(detailArray[0], detailArray[1])
            }
        }
    }
    if(checkPassportValidityNew(collectedDetails)){
        validPassport++
    }
    println(message = "Answer $validPassport")
}

fun checkPassportValidityNew(details: MutableMap<String,String>): Boolean {
    //println(details)
    val byr = details.get("byr")?.toInt()
    if(byr == null || byr < 1920 || byr > 2002){
        return false
    }
    val iyr = details.get("iyr")?.toInt()
    if(iyr == null || iyr < 2010 || iyr > 2020){
        return false
    }
    val eyr = details.get("eyr")?.toInt()
    if(eyr == null || eyr < 2020 || eyr > 2030){
        return false
    }
    var hgt = details.get("hgt")
    var hgtPatternRegex = Regex("(\\d+)(cm|in)")
    if(hgt == null){
        return false
    }
    val hgtMatchResult = hgtPatternRegex.matchEntire(hgt)
    if(hgtMatchResult == null){
        return false
    }
    val hgtVal = hgtMatchResult.groupValues[1].toInt()
    if(hgtMatchResult.groupValues[2].equals("cm")){
        if(hgtVal < 150 || hgtVal > 193){
            return false
        }
    }
    else{
        if(hgtVal < 59 || hgtVal > 76){
            return false
        }
    }
    val hcl = details.get("hcl")
    val hclPattern = Regex("#[0-9a-f]{6}")
    if(hcl == null || !hclPattern.matches(hcl)){
        return false
    }
    val ecl = details.get("ecl")
    if(!listOf<String>("amb", "blu", "brn", "gry", "grn", "hzl", "oth").contains(ecl)){
        return false
    }
    val pid = details.get("pid")
    val pidPattern = Regex("\\d{9}")
    if(pid == null || !pidPattern.matches(pid)){
        return false
    }
    return true
}