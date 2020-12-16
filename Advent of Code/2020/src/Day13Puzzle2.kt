import java.io.File

fun main(args: Array<String>) {
    val inputs: List<String> = File("AOCDay13_input.txt").readLines()
    var inputPairs = mutableListOf<Pair<Int,Int>>()
    for((index, busId) in inputs[1].split(",").withIndex()){
        if(busId != "x"){
            inputPairs.add(Pair(busId.toInt(),-index))
        }
    }
    println ("Ans ${calct(inputPairs)}")
}

fun calct(pairs: List<Pair<Int,Int>>): Long{
    val multiplier = pairs[0].first
    val adder = pairs[0].second
    var newPairs = mutableListOf<Pair<Int,Int>>()
    for( index in 1 until pairs.size){
        var i = 1
        while(true){
            if((multiplier*i + adder - pairs[index].second)%pairs[index].first == 0){
                newPairs.add(Pair(pairs[index].first,i))
                break
            }
            i++
        }
    }
    if(newPairs.size == 1){
        return newPairs[0].second.toLong() * pairs[0].first + pairs[0].second
    }
    else{
        return calct(newPairs) * pairs[0].first + pairs[0].second
    }
}