/* 🔀 Q14 (Conditional Statements)
Write a program to input a character and check whether it is a vowel or consonant using if–else. */

// Process 1               //Checks only Alphabets

 #include <stdio.h> 

int main(){
    char ch;

    printf("Enter a character you want to check: ");
    scanf("%c", &ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is a consonant.\n", ch);
    }

    return 0;
} 

//Process 2      (Using Nested if else Condition can also checks other symbols/non-alphabets)

#include <stdio.h>

int main(){
    char ch;
    
    printf("Enter a character you want to check: ");
    scanf("%c", &ch);
    printf("The ASCII value of %c is %d.", ch, ch);

    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){         //ImpStep1
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        printf("\nThe entered character %c is a vowel.", ch);  
        } else {
        printf("\nThe entered character %c is a consonant.", ch);
        } 
    } else {
        printf("\nThe entered character %c is not an alphabet.", ch);
    }

    return 0;
}

/* 
a)Remember:
----------------
 Here, In Process2 we:
1)Prints ASCII value of the character.
2)Checks if the character is an alphabet first.
3)Then checks if it is a vowel or consonant.
4)Handles both uppercase and lowercase letters. 

b)Information about  //ImpStep1
1)The letters are being compared using their ASCII values internally.
2)In C, a 'char' is stored as an integer representing the ASCII code of the character.
3)This is why the >= and <= comparisons work correctly.

*/