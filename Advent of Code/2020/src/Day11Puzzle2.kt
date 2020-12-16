import java.io.File

fun main(args: Array<String>) {
    var currentRoundSeats: List<List<Char>> = File("AOCDay11_input.txt").readLines().map{ it.toCharArray().asList() }
    var previousRoundSeats = listOf<List<Char>>()
    do{
        previousRoundSeats = currentRoundSeats;
        currentRoundSeats = nextRoundNew(currentRoundSeats);
    }while(!previousRoundSeats.equals(currentRoundSeats))

    val occupiedCount = currentRoundSeats.sumBy { it.filter { it == '#' }.size }

    println(message = "Answer $occupiedCount")
}

fun nextRoundNew(currentSeats: List<List<Char>>): List<List<Char>>{
    var nextRoundSeats = mutableListOf<MutableList<Char>>()
    for(i in 0 until currentSeats.size){
        nextRoundSeats.add(mutableListOf<Char>())
        for(j in 0 until  currentSeats[i].size){
            val adjacentCount = countAdjacentNew(currentSeats, i, j)
            if(currentSeats[i][j] == 'L' && adjacentCount == 0){
                nextRoundSeats[i].add('#')
            }
            else if(currentSeats[i][j] == '#' && adjacentCount >= 5){
                nextRoundSeats[i].add('L')
            }
            else{
                nextRoundSeats[i].add(currentSeats[i][j])
            }
        }
    }
    return nextRoundSeats
}

fun countAdjacentNew(currentSeats: List<List<Char>>, x: Int, y: Int): Int {
    var adjacentCount = 0
    for(i in -1..1) {
        for (j in -1..1) {
            if(i!=0 || j!=0) {
                if(getFirstSheet(currentSeats, x, y, i, j) == '#'){
                    adjacentCount++
                }
            }
        }
    }
    return adjacentCount
}

fun getFirstSheet(currentSeats: List<List<Char>>, x: Int, y: Int, i: Int, j: Int): Char {
    var seat = '.'
    var m = 1
    while(true) {
        if ((x+i*m) >= 0 && (x+i*m) < currentSeats.size && (y+j*m) >= 0 && (y+j*m) < currentSeats[x].size) {
            if(currentSeats[(x+i*m)][(y+j*m)] != '.') {
                seat = currentSeats[(x + i * m)][(y + j * m)]
                break
            }
        }
        else{
            break
        }
        m++
    }
    return seat
}
