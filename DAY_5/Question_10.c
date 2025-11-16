/* 🖥️ Q10 (User Inputs, Operations & Output)
Write a program to input time in seconds and convert it to hours:minutes:seconds format. */

#include <stdio.h>

int main(){
    int TotalSeconds,Seconds,Minutes,Hours;

    printf("Enter the time in seconds: ");
    scanf("%d", &TotalSeconds);              //Total time in Seconds

    Hours=TotalSeconds/3600;                      //get Hours  
    TotalSeconds=TotalSeconds%3600;                //get remaining seconds

    Minutes=TotalSeconds/60;                      //get Minutes
    Seconds=TotalSeconds%60;                      // get seconds
    
    printf("So, The time is %d:%d:%d", Hours,Minutes,Seconds);
    return 0;
}



/* Explanation in Points
--------------------------

1)You first take the total time in seconds from the user.
2)To get hours, you divide the total seconds by 3600
  (because 1 hour = 3600 seconds).
3)Since hours are stored in an int, only the integer value is taken and the decimal part is ignored.
4)You then calculate the remaining seconds after removing the hours using % 3600.
5)To get minutes, you divide the remaining seconds by 60.
6)Again, because minutes are stored in an int, only the integer value is taken.
7)Finally, you get the remaining seconds after removing minutes using % 60. */