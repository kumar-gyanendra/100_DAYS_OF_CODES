/* 🖥️ Q1 (User Inputs, Operations & Output)
Write a program to input two numbers and display their sum. */

#include <stdio.h>

int main(){
    float a,b,sum;
    printf("Enter the Value of a(Number 1): ");
    scanf("%f", &a);
    printf("Enter the Value of b(Number 2): ");
    scanf("%f", &b);

    sum=a+b;
    printf("The Sum of %.2f and '%.2f is %.2f", a, b, sum);

    return 0;
}