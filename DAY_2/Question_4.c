/* 🖥️ Q4 (User Inputs, Operations & Output)
Write a program to calculate the area and circumference of a circle given its radius */

#include <stdio.h>

int main(){
    float radius,Area,Circumference;
    printf("Enter the value of radius of the circle: ");
    scanf("%f", &radius);
    
    Area=3.14159*radius*radius;                    
    Circumference=2*3.14159*radius;
    printf("\nThe area of the circle with mentioned radius is %.2f\n", Area);
    printf("The Circumference of the circle with mentioned radius is %.2f", Circumference);
    return 0;
}


/* NOTE:
   In this program, we can use either 22.0/7.0 or M_PI for the value of π.
   - 22.0/7.0 is a simple approximation used for basic calculations.
   - M_PI (from <math.h>) provides a more accurate value of π.
   Using M_PI is recommended when higher precision is required.
*/