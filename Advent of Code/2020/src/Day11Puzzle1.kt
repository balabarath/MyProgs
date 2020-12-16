import java.io.File

fun main(args: Array<String>) {
    var currentRoundSeats: List<List<Char>> = File("AOCDay11_input.txt").readLines().map{ it.toCharArray().asList() }
    var previousRoundSeats = listOf<List<Char>>()
    do{
        previousRoundSeats = currentRoundSeats;
        currentRoundSeats = nextRound(currentRoundSeats);
    }while(!previousRoundSeats.equals(currentRoundSeats))

    val occupiedCount = currentRoundSeats.sumBy { it.filter { it == '#' }.size }

    println(message = "Answer $occupiedCount")
}

fun nextRound(currentSeats: List<List<Char>>): List<List<Char>>{
    var nextRoundSeats = mutableListOf<MutableList<Char>>()
    for(i in 0 until currentSeats.size){
        nextRoundSeats.add(mutableListOf<Char>())
        for(j in 0 until  currentSeats[i].size){
            val adjacentCount = countAdjacent(currentSeats, i, j)
            if(currentSeats[i][j] == 'L' && adjacentCount == 0){
                nextRoundSeats[i].add('#')
            }
            else if(currentSeats[i][j] == '#' && adjacentCount >= 4){
                nextRoundSeats[i].add('L')
            }
            else{
                nextRoundSeats[i].add(currentSeats[i][j])
            }
        }
    }
    return nextRoundSeats
}

fun countAdjacent(currentSeats: List<List<Char>>, x: Int, y: Int): Int {
    var adjacentCount = 0
    for(i in -1..1){
        for(j in -1..1){
            if(i!=0 || j!=0){
                if(x+i >= 0 && x+i < currentSeats.size && y+j >= 0 && y+j < currentSeats[x].size && currentSeats[x+i][y+j] == '#'){
                    adjacentCount++
                }
            }
        }
    }
    return adjacentCount
}
