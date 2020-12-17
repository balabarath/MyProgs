import java.io.File

fun main(args: Array<String>) {
    val inputs: List<String> = File("AOCDay17_input.txt").readLines()
    var grid = mutableMapOf<Point,Boolean>()
    for((x,input) in inputs.withIndex()){
        for((y,c) in input.toCharArray().withIndex()){
            grid.put(Point(x,y,0),c == '#')
        }
    }

    for(i in 1..6){
        println("$i  ${countActive(grid)}")
        grid = nextGen(grid)
    }

    println(message = "Answer ${countActive(grid)}")
}

fun countActive(grid: Map<Point, Boolean>): Int{
    return grid.count { it.value }
}

fun nextGen(currentGrid: Map<Point, Boolean>): MutableMap<Point, Boolean>{
    var nextGenGrid = mutableMapOf<Point,Boolean>()
    var processedPoints = mutableSetOf<Point>()
    for(point in currentGrid.keys){
        if(!processedPoints.contains(point)) {
            nextGenGrid.put(point, nextGenStatus(point, currentGrid))
            processedPoints.add(point)
        }
        for(neighbor in getNeighbors(point)){
            if(!processedPoints.contains(neighbor)) {
                nextGenGrid.put(neighbor, nextGenStatus(neighbor, currentGrid))
                processedPoints.add(neighbor)
            }
        }
    }
    return nextGenGrid
}

fun nextGenStatus(point: Point, grid: Map<Point, Boolean>): Boolean {
    val neighbors = getNeighbors(point)
    var activeCount = 0
    for(point in neighbors){
        if(grid[point] == true){
            activeCount ++
        }
    }
    if(grid[point] == true){
        return (activeCount == 2) or (activeCount == 3)
    }
    else{
        return activeCount == 3
    }
}

fun getNeighbors(point: Point): List<Point>{
    var neighbors = mutableListOf<Point>()
    for(x in -1..1){
        for (y in -1..1){
            for (z in -1..1){
                if(x != 0 || y != 0 || z != 0 ){
                    neighbors.add(Point(point.x+x,point.y+y,point.z+z))
                }
            }
        }
    }
    return neighbors
}

class Point(val x:Int, val y:Int, val z:Int){

    override fun hashCode(): Int {
        return "$x $y $z".hashCode()
    }

    override fun equals(other: Any?): Boolean {
        if(other == null) return false
        val p = other as Point
        return p.x == this.x && p.y == this.y && p.z == this.z
    }
}

