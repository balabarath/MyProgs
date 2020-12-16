
fun main(args: Array<String>) {
    val positionMap = mutableMapOf<Int,Int>()
    val inputs = listOf<Int>(14,3,1,0,9,5)
    for((idx,number) in inputs.withIndex()){
        positionMap[number] = idx+1
    }
    var currentVal = 0
    for(i in inputs.size+1 until  30000001){
        var newVal = 0
        if(positionMap[currentVal] != null){
            //println("$i ${positionMap[currentVal]?:0}")
            newVal = i - (positionMap[currentVal]?:0)
        }
        positionMap[currentVal] = i
        //println("${i}, $currentVal")
        if(i < 30000000) {
            currentVal = newVal
        }
    }
    println(message = "Answer $currentVal")
}