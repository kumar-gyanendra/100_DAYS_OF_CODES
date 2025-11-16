/* 🔀 Q20 (Conditional Statements)
Write a program to display the day of the week based on a number (1–7) using switch-case. */

#include <stdio.h>

int main(){
    int day;

    printf("Enter the day of the week based on a number (1-7): ");
    scanf("%d", &day);

    switch (day){
    case 1:
        printf("Day1 is Monday\n");
        break;
    case 2:
        printf("Day2 is Tuesday\n");
        break;
    case 3:
        printf("Day3 is Wednesday\n");
        break;
    case 4:
        printf("Day4 is Thursday\n");
        break;
    case 5:
        printf("Day5 is Friday");
        break;
    case 6:
        printf("Day6 is Saturday");
        break;
    case 7:
        printf("Day7 is Sunday");
        break;
    default:
        printf("Nothing matched");
    }
    
    return 0;
}