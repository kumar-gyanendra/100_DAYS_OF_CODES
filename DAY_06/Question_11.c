/* 🔀 Q11 (Conditional Statements)
Write a program to input an integer and check whether it is even or odd using if–else. */

#include <stdio.h>

int main(){
    int a;

    printf("Enter the number you want to check: ");
    scanf("%d", &a);

    if(a%2==0){
        printf("%d is an even number.", a);
    }else{
        printf("%d is an odd number.", a);
    }
    return 0;
}