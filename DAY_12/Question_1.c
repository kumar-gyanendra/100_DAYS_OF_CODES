/* 🔀 Q23 (Conditional Statements)
Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled. */

#include <stdio.h>
 
 int main(){
    int ndays, day_5, day_10, day_30;

    printf("Enter the number of late days: ");
    scanf("%d", &ndays);

     if(ndays>0 && ndays<=5){
        day_5= ndays*2;
        printf("Total Late Fine: %d Rupees\n", day_5);           
     } 
     else if (ndays>5 && ndays<=10){
        day_10= 5*2 + (ndays-5)*4;
        printf("Total Late Fine: %d Rupees\n", day_10);
     }
     else if (ndays>10 && ndays<=30){
        day_30= 5*2 + 5*4 + (ndays-10)*6;
        printf("Total Late Fine: %d Rupees\n", day_30);
     }
     else{
        printf("Membership Cancelled");
     }
    return 0;
     }





//INCORRECT LOGIC(ANSWER WILL BE CORRECT)

/* #include <stdio.h>
 
 int main(){
    int ndays, day_5, day_10, day_30;

    printf("Enter the number of late days: ");
    scanf("%d", &ndays);

     day_5= ndays*2;
     day_10= 5*2 + (ndays-5)*4;
     day_30= 5*2 + 5*4 + (ndays-10)*6;
     
     if(ndays>0 && ndays<=5){
        printf("Total Late Fine: %d Rupees\n", day_5);           
     } 
     else if (ndays>5 && ndays<=10){
        printf("Total Late Fine: %d Rupees\n", day_10);
     }
     else if (ndays>10 && ndays<=30){
        printf("Total Late Fine: %d Rupees\n", day_30);
     }
     else{
        printf("Membership Cancelled");
     }
    return 0;
     } */



/* NOTE (Important Reminder)
----------------------------------
Wrong Logic I Used Earlier:
I calculated all fines (day_5, day_10, day_30) before checking the conditions. This caused negative values like:

(ndays – 5) when ndays < 5
(ndays – 10) when ndays < 10
Even though these wrong values were not printed, the logic was incorrect because fines for higher slabs should only be calculated when the number of late days actually reaches that slab. 


Correct Logic to Remember
-----------------------------
Calculate only the fine for the slab the number of days belongs to.

1)If days ≤ 5 → calculate only 2/day
2)If days ≤ 10 → calculate first 5 days + remaining × 4
3)If days ≤ 30 → calculate first 10 days + remaining × 6
4)If days > 30 → membership cancelled
This ensures no negative values and correct slab-based calculation.

IMPORTANT:
-----------
**Each late-day range (slab) must be calculated inside its own condition block only.
Do NOT calculate fine for the next slab unless the number of days enters that slab.
This prevents negative values and keeps the slab logic correct.
*/