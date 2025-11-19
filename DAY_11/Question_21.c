/* 🔀 Q21 (Conditional Statements)
Write a program to display the month name and number of days using switch-case for a given month number. */

#include <stdio.h>

int main(){
    int a;
    printf("Enter Month number for the details(1-12) - ");
    scanf("%d", &a);

    switch(a){
        case 1:
        printf("Since you enter 1\nMonth: January and Days: 31");
        break;
        case 2:
        printf("Since you enter 2\nMonth: February and Days: 28(in leap year: 29)");
        break;
        case 3:
        printf("Since you enter 3\nMonth: March and Days: 31");
        break;
        case 4:
        printf("Since you enter 4\nMonth: April and Days: 30");
        break;
        case 5:
        printf("Since you enter 5\nMonth: May and Days: 31");
        break;
        case 6:
        printf("Since you enter 6\nMonth: June and Days: 30");
        break;
        case 7:
        printf("Since you enter 7\nMonth: July and Days: 31");
        break;
        case 8:
        printf("Since you enter 8\nMonth: August and Days: 31");
        break;
        case 9:
        printf("Since you enter 9\nMonth: September and Days: 30");
        break;
        case 10:
        printf("Since you enter 10\nMonth: October and Days: 31");
        break;
        case 11:
        printf("Since you enter 11\nMonth: November and Days: 30");
        break;
        case 12:
        printf("Since you enter 12\nMonth: December and Days: 31");
        break;
        default:
        printf("You have entered invalid Month number.");
    }
    return 0;
}
