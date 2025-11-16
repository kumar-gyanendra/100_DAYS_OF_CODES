/* 🖥️ Q5 (User Inputs, Operations & Output)
Write a program to convert temperature from Celsius to Fahrenheit. */

#include <stdio.h>

int main(){
    float celcius, fahrenhiet;
    printf("Enter the value in Celcius: ");
    scanf("%f", &celcius);

    fahrenhiet = (9.0/5.0)*celcius +32.0;
    printf("The converted value of %.2f degree celcius in fahrenhiet is %.2f", celcius, fahrenhiet);
    return 0;
}