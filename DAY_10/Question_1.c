/* 🔀 Q19 (Conditional Statements)
Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths. */

#include <stdio.h>

int main(){
    float a,b,c;

    printf("Enter the length of first side of the traingle:\n");
    scanf("%f", &a);
    printf("Enter the length of second side of the traingle:\n");
    scanf("%f", &b);
    printf("Enter the length of third side of the traingle:\n");
    scanf("%f", &c);

    if(a+b>c && b+c>a && c+a>b){
        printf("\n\nSum of two Side is greater than the third side, Hence the Traingle is Valid and ");
    if (a==b && b==c && c==a){
        printf("the traingle is Equilateral.\n");
    } else if (a==b || b==c || c==a){
        printf("the traingle is Isosceles.\n");
    }else{
        printf("the traingle is Scalene.\n");
        }
    } else {
        printf("\nThe traingle is invalid.");
    }
    return 0;
}