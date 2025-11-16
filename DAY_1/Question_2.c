/* 🖥️ Q2 (User Inputs, Operations & Output)
Write a program to input two numbers and display their sum, difference, product, and quotient. */

#include <stdio.h>

int main(){
    float a,b,sum,difference,product,quotient;
    printf("Enter the Value of a(Number 1): ");
    scanf("%f", &a);
    printf("Enter the Value of b(Number 2): ");
    scanf("%f", &b);

    sum=a+b;
    difference=a-b;
    product=a*b;
    quotient=a/b;

    printf("The Sum of %.2f and %.2f is %.2f\n", a,b,sum);
    printf("The Difference of %.2f and %.2f is %.2f\n", a,b,difference);
    printf("The Product of %.2f and %.2f is %.2f\n", a,b,product);
    
// Now, Let's Handle division by Zero
   if(b != 0){
    printf("The Quotient of when %.2f is divided by %.2f is %.2f\n", a, b, quotient);
   } else{
    printf("Since the denominator is equal to zero, So the Quotient is undefined\n");
    }
    return 0;
   }
    