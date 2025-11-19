/* 🔀 Q18 (Conditional Statements)
Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F. */

#include <stdio.h>

int main(){
    char grade;
    int marks;
    printf("ENTER YOUR MARKS OBTAINED:\n");
    scanf("%d", &marks);

     if (marks < 0 || marks > 100) 
    {
        printf("you have entered invalid number");
     return 0;
    }
   

    switch (marks/10){      //remember-when you will divide by 10 the decimal part will be discarded and only the integer part will be evaluated
    case 10:                //FOR MARKS 100
    case 9:                 //FOR MARKS BETWEEN 90-99
        grade = 'A';
        break;
    
    case 8:                 // FOR MARKS BETWEEN 80-89
       grade = 'B';
       break;

    case 7:                // FOR MARKS BETWEEN 70-79
       grade = 'C';
       break;

    case 6:                // FOR MARKS BETWEEN 60-69
       grade = 'D';
       break;

    case 5:                // FOR MARKS BELOW 60
    case 4:
    case 3:
    case 2:               //IN THIS WAY WE CAN USE ONE RESULT FOR MULTIPLE CASES.
    case 1:
    case 0:
    grade = 'F';
       break;
    }
    printf("YOU HAVE OBTAINED %c GRADE", grade);

    return 0;     // HUMNE ABHI TOP PE (explicit range check) KAR LIYA H. JISKE KARAN HUME DEFAULT ABHI LIKNE KE NEED NHI H. HUMNE SURU MEI HI DEFINE KAAR DIYA H KI VALUE KANHA INVALID H
}
