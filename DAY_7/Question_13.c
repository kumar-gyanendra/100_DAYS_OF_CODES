/* 🔀 Q13 (Conditional Statements)
Write a program to input a year and check whether it is a leap year or not using conditional statements. */


//Process1

 #include <stdio.h>

int main(){
    int year;

    printf("Enter the year to check whether it is a leap year or not:\n");
    scanf("%d", &year);

    if( (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ){
        printf("\nIt is a leap year.\n");
    } else{
        printf("\nIt is not a leap year.\n");
    }

    return 0;
} 


//Process2     (using Nested if else condition)

#include <stdio.h>

int main() {
    int year;

    // Ask user for input
    printf("Enter a year:\n");
    scanf("%d", &year);

    // Leap year check
    if (year % 4 == 0) {                  // first if
        if (year % 100 == 0) {            // second if
            if (year % 400 == 0) {        // third if
                printf("\n%d is a Leap Year\n", year);
            } else {                       // *last else* (runs if divisible by 100 but not 400)          //ye third if ka else hai
                printf("\n%d is not a Leap Year\n", year);
            }
        } else {                           // *second last else* (runs if divisible by 4 but not 100)     //ye second if ka else hai
            printf("\n%d is a Leap Year\n", year);
        }
    } else {                               // *first else* (runs if not divisible by 4)    //ye first if ka else hai
        printf("\n%d is NOT a Leap Year\n", year);
    }
} 


// Remember:
//LEAP YEAR LOGIC

/* A year is a leap year if:
It is divisible by 4 and not divisible by 100
OR
It is divisible by 400  */