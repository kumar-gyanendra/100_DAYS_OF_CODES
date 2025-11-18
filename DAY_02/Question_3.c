/* 🖥️ Q3 (User Inputs, Operations & Output)
Write a program to calculate the area and perimeter of a rectangle given its length and breadth. */

#include <stdio.h>

 int main(){
    int length, breadth,Area,Perimeter;
    printf("Enter the length of the Rectangle: ");
    scanf("%d", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);

    Area=length * breadth;
    Perimeter=2*(length+breadth);

    printf("\nThe area of the Rectangle is %d\n", Area);
    printf("The perimeter of the Rectangle is %d", Perimeter);
    return 0;
}