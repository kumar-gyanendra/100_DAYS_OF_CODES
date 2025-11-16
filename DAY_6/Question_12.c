/* 🔀 Q12 (Conditional Statements)
Write a program to input an integer and check whether it is positive, negative or zero using nested if–else. */

#include <stdio.h>

int main(){
    int a;
    
    printf("Enter the number you want to check: ");
    scanf("%d", &a);
    
    if(a>=0){
        if(a==0){
            printf("\nThe Number entered is Zero.");

        } else{
            printf("\nThe Number entered is Positve.");
        }
    } else {
        printf("\nThe Number entered is Negative.");
    }

    return 0;
}



/* 
#Remember:
-------------

1)A nested if–else is an if–else statement written inside another if–else statement.
2)Basically, Nested if–else allows you to make a decision inside another decision. 


#Syntax:
---------

if(condition1){                 // outer if
    if(condition2){             // inner if
        // inner if block
    }else{                      // inner else
        // inner else block
    }
}else{                          // outer else
    if(condition3){             // inner if inside outer else
        // inner if block
    }else{                      // inner else inside outer else
        // inner else block
    }
}

*/