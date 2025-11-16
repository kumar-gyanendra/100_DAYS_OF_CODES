/* 🔀 Q17 (Conditional Statements)
Write a program to find the roots of a quadratic equation and categorize them. */

#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,discriminant,root1,root2;
    printf("We know that the Quadratic Equation are in the form of ax^2 + bx + c\n");
    printf("Enter the value of the coefficents a, b and c simultaneously: \n");
    scanf("%f %f %f", &a, &b, &c);
 
    discriminant=b*b-4*a*c;

    if(discriminant>0){           //Roots are real and distinct
       root1= (-b+sqrt(discriminant))/(2*a);       
       root2= (-b-sqrt(discriminant))/(2*a);
    
       printf("The roots are real and distinct, and root1=%.2f and root2=%.2f", root1, root2);

    } else if(discriminant==0){           //Roots real and Equal
       root1=root2= (-b)/(2*a);
    
       printf("The roots are real and equal, and root1=%.2f and root2=%.2f", root1, root2);

    }else{
        printf("The roots are imaginary");
    }

    return 0;
}


/* REMEMBER:
1) 'sqrt' is a function in C (from the math.h library) that calculates the square root of a number.
2)  must include #include <math.h> to use sqrt(). */