/* 🔀 Q24 (Conditional Statements)
Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit */

#include <stdio.h>

int main(){
    int unit, f_100, f_200, f_300, f_above;

    printf("Enter the number of units of electricity consumed: ");
    scanf("%d", &unit);

   if(unit>0 && unit<=100){
    f_100 = 5*unit;
    printf("Electricity Bill = %d rupees", f_100);
   }
   else if(unit>100 && unit<=200){
    f_200= 100*5 + (unit-100)*7;
    printf("Electricity Bill = %d rupees", f_200);
   }
   else if(unit>200 && unit<=300){
    f_300= 100*5+ 100*7 + (unit-200)*10;
    printf("Electricity Bill = %d rupees", f_300);
   }
   else{
    f_above = 100*5+100*7+100*10+(unit-300)*12;
    printf("Electricity Bill = %d rupees", f_above);
   }
    return 0;
   }


    
