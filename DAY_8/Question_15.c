/* 🔀 Q15 (Conditional Statements)
Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character. */

#include <stdio.h>

int main(){
    char ch;

    printf("Enter the character for which you want to check:\n");
    scanf("%c", &ch);
    printf("The value of character in ASCII is %d\n", ch);

    if(ch >= 65 && ch <= 90){
        printf("The entered character is '%c' and is a Uppercase alphabet", ch);
    } else if (ch >= 97 && ch <= 122){
        printf("The entered character is '%c' and is a Lowercase alphabet", ch);
    } else if (ch >= 48 && ch <= 57){
        printf("The entered character is '%c' and is a digit", ch);
    } else if((ch >= 33 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126)){
        printf("The entered character is '%c' and is a symbol", ch);
    }
     return 0;
    }
    


/* 
REMEMBER:
----------
A) %c — Character format

1)Prints the actual character stored in a char variable.
2)Works for letters, digits, or symbols.
3)Internally, C stores every character as its ASCII value, but %c prints it as the visible character.

B) %d — Integer format

1)Prints the numeric value of the variable.
2)If used with a char, it prints the ASCII code of that character 

*/