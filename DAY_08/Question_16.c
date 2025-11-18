/* 🔀 Q16 (Conditional Statements)
Write a program to input three numbers and find the largest among them using if–else. */

#include <stdio.h>

int main(){
    float a,b,c;

    printf("Enter number 1: ");
    scanf("%f", &a);
    printf("Enter number 2: ");
    scanf("%f", &b);
    printf("Enter number 3: ");
    scanf("%f", &c);

    if(a>=b && a>=c){
        printf("\n%.2f is Largest among the numbers entered.", a);
    } else if(b>=a && b>=c){
        printf("\n%.2f is Largest among the numbers entered.", b);
    } else {
        printf("\n%.2f is Largest among the numbers entered.", c);
    }

    return 0;
}


/* 
REMEMBER:
-----------
1) This program uses an if-else ladder.
2) Only one block will run (the first condition that matches)
3) >= is used instead of > so that if two numbers are equal and both greatest, at least one of them get printed. 
4) with only >, the program fails  when two or more numbers are equal and greatest.
5) with >=, it works correctly in both cases(unique greatest or tie). 
*/ 