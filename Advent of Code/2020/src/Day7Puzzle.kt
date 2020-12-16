import java.io.File

fun main(args: Array<String>) {
    val inputs: List<String> = File("AOCDay7_input.txt").readLines()
    var bags: MutableMap<String,Bag> = mutableMapOf()
    var count : Int = 0
    for (input in inputs){
        constructBagsMap(input, bags)
    }
    for(bag in bags.values){
        if(bag.canContain("shiny gold", bags)){
            count++
        }
    }
    println("Puzzle 1: Bags that can hold shiny gold "+count)
    println("Puzzle 2: Bags with in shiny gold "+ (bags["shiny gold"]?.getAllInnerBagCount(bags) ?: 0))
}

fun constructBagsMap(input: String, bags: MutableMap<String,Bag>) {
    val inputParts = input.split(" bags contain ")
    val bag = Bag(inputParts[0])
    if(!inputParts[1].equals("no other bags.")){
        val innerBags = inputParts[1].split(", ")
        for(innerBag in innerBags){
            val pattern = Regex("(\\d+)\\s([\\w+\\s*\\w*]+) bag[s]?[\\.]?")
            val result = pattern.matchEntire(innerBag)
            if(result != null){
                val count = result.groupValues[1].toInt()
                val color = result.groupValues[2]
                bag.addInnerBag(color,count)
            }
            else{
                println("$innerBag not matching regex")
            }
        }
    }
    bags.put(inputParts[0],bag)
}


class Bag (val color: String){
    var innerBags : MutableMap<String,Int> = mutableMapOf()
    var isColorsProcessed = false
    var isCountProcessed = false
    var allInnerBagsCount = 0
    var allContainableColors = mutableSetOf<String>()

    fun addInnerBag(color: String, count: Int){
        innerBags.put(color, count)
    }

    fun canContain(color: String, bags: MutableMap<String,Bag>): Boolean{
        return getContainableColors(bags).contains(color)
    }

    fun getContainableColors(bags: MutableMap<String,Bag>): Set<String>{
        if(!isColorsProcessed) {
            for(color in innerBags.keys){
                allContainableColors.add(color)
                bags[color]?.getContainableColors(bags)?.let { allContainableColors.addAll(it) }
            }
            isColorsProcessed = true
        }
        return allContainableColors
    }

    fun getAllInnerBagCount(bags: MutableMap<String,Bag>): Int{
        if(!isCountProcessed) {
            for((color,count) in innerBags){
                allInnerBagsCount += count
                bags[color]?.getAllInnerBagCount(bags)?.let { allInnerBagsCount += count * it }
            }
            isCountProcessed = true
        }
        return allInnerBagsCount
    }
}