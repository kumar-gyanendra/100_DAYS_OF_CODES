/* Q25 (Conditional Statements)
Write a program to implement a basic calculator using switch-case for +, -, *, /, %. */

#include <stdio.h>

int main(){
    int a,b;
    char operator;

    printf("Enter the type of Operator(+, -, *, /, %): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(operator){
        case '+':
        printf("The sum of two numbers %d and %d is %d", a, b, a+b);
        break;
        case '-':
        printf("The difference of two numbers %d and %d is %d", a, b, a-b);
        break;
        case '*':
        printf("The Product of two numbers %d and %d is %d", a, b, a*b);
        break;
        case '/':
        if(b != 0 ){
        printf("The quotient of two numbers %d and %d is %d", a, b, a/b);
        } else {
            printf("Division by zero is not allowed");
        }
        break;
        case '%':
        if(b != 0){
        printf("The Remainder of two numbers %d and %d is %d", a, b, a%b);
        } else {
            printf("Modulo by zero is not allowed");
        }
        break;
        default:
        printf("Invalid Input");
    }
    return 0;
    }


/*IMPORTANT POINT TO BE REMEMEBER:

1)In C, you can use '+', '-', '*', '/', '%' directly in a switch because they are character constants, not variables.
Anything inside single quotes ' ' is treated as a char literal (ASCII value), and case accepts constant values. { Case '+': } is valid because '+' is a constant, not a variable. (case accepts ONLY constant values in C)

2)Why char 'a'; or char '+'; is invalid?
Answer- Because 'a' and '+' are character literals, not valid variable names. Variable names cannot use quotes or symbols.

3)Why %c sometimes fails to read the operator?
Answer- scanf("%c") reads whitespace such as the leftover newline (\n). This makes the operator incorrect.
Adding a space before %c tells scanf to skip whitespace and read the actual operator input.

4)The modulus operator % is defined only for integers, not for floats.
*/



    
