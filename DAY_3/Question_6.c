/* 🖥️ Q6 (User Inputs, Operations & Output)
Write a program to swap two numbers using a third variable. */

#include <stdio.h>

int main(){
    int a,b,swap;
    printf("Enter the value of First Number: ");
    scanf("%d", &a);
    printf("Enter the value of Second Number: ");
    scanf("%d", &b);
    
    printf("\nBefore Swapping\n");
    printf("First Number and Second Number Simultaneously: %d  %d\n", a, b);

    //Let's Swap using third Variable
    swap = a;    //Storing 'a' in swap
    a = b;       //Assigning 'b' to 'a'
    b = swap;     //Assigning the Original value of 'a'(stored in swap) to 'b'

    printf("\nAfter Swapping\n");
    printf("First Number and Second Number Simultaneously: %d  %d\n", a, b);

    return 0;
}
