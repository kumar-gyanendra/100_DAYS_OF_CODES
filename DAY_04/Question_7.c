/* 🖥️ Q7 (User Inputs, Operations & Output)
Write a program to swap two numbers without using a third variable. */

#include <stdio.h>

int main(){
    int a,b;
    printf("Enter the value of a(First Number): ");
    scanf("%d", &a);
    printf("\nEnter the value of b(Second Number): ");
    scanf("%d", &b);

    printf("\nBefore Swapping 'a' and 'b' simultaneously: %d  %d\n", a, b);

    //Now, Let's Swap without using A Third Variable
    a = a + b;   // storing (a + b) in 'a'
    b = a - b;   //  b becomes original a 
    a = a - b;   //  a becomes original b

    printf("\nAfter Swapping 'a' and 'b' simultaneously: %d  %d\n", a, b);
    return 0;
}


//Point to be Noted:
/* In swapping without a third variable, each assignment updates the variable’s original value.
However, here the arithmetic operations are chosen such that the original values can still be extracted and swapped correctly. */