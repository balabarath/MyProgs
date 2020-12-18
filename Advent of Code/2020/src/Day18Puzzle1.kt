import java.io.File
import java.util.ArrayDeque

fun main(args: Array<String>) {
    val inputs: List<String> = File("AOCDay18_input.txt").readLines()
    var sum: Long = 0
    for(expression in inputs){
        val result = evaluateExpression(expression)
        println("$result")
        sum += result
    }
    println(message = "Answer $sum")
}

fun evaluateExpression(expression: String): Long {
    var operands = ArrayDeque<Long>()
    var operators = ArrayDeque<Char>()
    for( token in expression.toCharArray()){
        if(token.isDigit()){
            operands.push(token.minus('0').toLong())
        }
        else if(token == '('){
            operators.push(token)
        }
        else if(token == ')'){
            while (operators.peek() !='('){
                val output = performOperation(operands,operators)
                operands.push(output)
            }
            operators.pop()
        }
        if(isOperator(token)){
            while (!operators.isEmpty() && precedence(token) <= precedence(operators.peek()) ){
                val output = performOperation(operands,operators)
                operands.push(output)
            }
            operators.push(token)
        }
    }
    while (!operators.isEmpty()){
        val output = performOperation(operands,operators)
        operands.push(output)
    }
    return operands.pop().toLong()
}

fun precedence(token: Char): Int {
    if(token == '*' || token == '+') return 1
    return 0
}

fun performOperation(operands: ArrayDeque<Long>, operators: ArrayDeque<Char>): Long {
    val operator = operators.pop()
    val a = operands.pop()
    val b = operands.pop()
    if(operator == '+'){
        return a+b
    }
    else if( operator == '*'){
        return a*b
    }
    else{
        println("Unknown operator $operator")
        return 0
    }
}

fun isOperator(token: Char): Boolean {
    return (token == '+') or (token == '*')
}
