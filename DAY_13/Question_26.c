/* 🔁 Q26 (Loops without Arrays/Strings)
Write a program to print numbers from 1 to n. */

#include <stdio.h>

int main(){
    int i,n;

    printf("How many Numbers you want to print: ");
    scanf("%d", &n);
    
    if(n<=0){
        printf("Invalid Number Entered");
    }
    else{
    printf("\nLet's print numbers from 1 to %d:\n", n);
    for(i=1; i<=n; i++){
        printf("%d\n", i);
    }
}
    return 0;
}