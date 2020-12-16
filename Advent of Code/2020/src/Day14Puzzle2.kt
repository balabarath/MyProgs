import java.io.File


fun main(args: Array<String>) {
    val inputs: List<String> = File("AOCDay14_input.txt").readLines()
    var currentMask = ""
    var values = mutableMapOf<Long,Long>()
    for (input in inputs){
        val matchResult = Regex("mem\\[(\\d+)\\] = (\\d+)").matchEntire(input)
        if(matchResult != null){
            for(address in calculateAddresses(currentMask,matchResult.groupValues[1].toLong())){
                values.put(address, matchResult.groupValues[2].toLong())
            }
        }
        else{
            currentMask = input.split(" = ")[1]
        }
    }
    var ans: Long = 0
    for((key,value) in values){
        ans += value
    }
    println("Answer ${ans}")
}

fun calculateAddresses(mask: String, inputAddress: Long): List<Long>{
    var addressLists = mutableListOf<Long>(0)
    var orValue: Long = 0
    var andValue:Long = 0
    var mul:Long = 1
    for(bit in mask.toCharArray().reversed()){
        var newAddressList = mutableListOf<Long>()
        for((index,address) in addressLists.withIndex()){
            if(bit == '0'){
                if(inputAddress and mul > 0){
                    addressLists[index] = address or mul
                }
            }
            else if(bit == '1'){
                addressLists[index] = address or mul
            }
            else{
                newAddressList.add(address or mul)
            }
        }
        addressLists.addAll(newAddressList)
        mul *= 2
    }
    return addressLists
}