/* 🖥️ Q9 (User Inputs, Operations & Output)
Write a program to calculate simple and compound interest for given principal, rate, and time. */

#include <stdio.h>
#include <math.h>          //'math.h' is a header file in C that gives your program access to mathematical functions.

int main(){
    float principal, rateofintetest, time, SimpleInterest, Amount, CompoundInterest;
    printf("Enter principal amount:\n");
    scanf("%f", &principal);

    printf("Enter rate of interest:\n");
    scanf("%f", &rateofintetest);

    printf("Enter time period:\n");
    scanf("%f", &time);
    
    SimpleInterest=(principal*rateofintetest*time)/100;
    Amount=principal*pow((1+(rateofintetest/100)),time);           //pow(x, y) returns x raised to power y or x to the power y. It is used for exponent calculations like compound interest.
    CompoundInterest=Amount-principal;

    printf("The Simple Interest obtained is: %.2f\n", SimpleInterest);
    printf("The Compound Interest obtained is: %.2f\n", CompoundInterest);

    return 0;
}
