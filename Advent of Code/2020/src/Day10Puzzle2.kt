import java.io.File

fun main(args: Array<String>) {
    val inputs: List<Int> = File("AOCDay10_input.txt").readLines().map{ it.toInt() }.sorted()
    val max = (inputs.max()?:0) + 3
    var countMap = mutableMapOf<Int,Long>()
    countMap.put(0,1)
    for(input in inputs){
        countMap.put(input,0)
    }
    countMap.put(max,0)
    inc(countMap,0)
    for(input in inputs){
        inc(countMap, input)
    }

    //println(countMap)

    println("Ans ${countMap[max]}")
}

fun inc(countMap: MutableMap<Int,Long>, number: Int){
    if(countMap[number+1] != null){
        countMap[number+1] = (countMap[number+1]?:0) + (countMap[number]?:1)
    }
    if(countMap[number+2] != null){
        countMap[number+2] = (countMap[number+2]?:0) + (countMap[number]?:1)
    }
    if(countMap[number+3] != null){
        countMap[number+3] = (countMap[number+3]?:0) + (countMap[number]?:1)
    }
}
