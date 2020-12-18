import java.io.File
import java.util.ArrayDeque

fun main(args: Array<String>) {
    val inputs: List<String> = File("AOCDay18_input.txt").readLines()
    var sum: Long = 0
    for(expression in inputs){
        val result = evaluateExpressionNew(expression)
        println("$result")
        sum += result
    }
    println(message = "Answer $sum")
}

fun evaluateExpressionNew(expression: String): Long {
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
            while (!operators.isEmpty() && precedenceNew(token) <= precedenceNew(operators.peek()) ){
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

fun precedenceNew(token: Char): Int {
    if(token == '*') return 1
    if(token == '+') return 2
    return 0
}
