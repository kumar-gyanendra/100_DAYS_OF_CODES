/* 🖥️ Q8 (User Inputs, Operations & Output)
Write a program to find and display the sum of the first n natural numbers. */

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of n for which you want to calculate the sum (like sum of first n numbers): ");
    scanf("%d", &n);

    i = 1;
    while (i <= n) {
        sum = sum + i;
        i++;
    }

    printf("The sum of the first %d natural numbers is %d\n", n, sum);

    return 0;
}
