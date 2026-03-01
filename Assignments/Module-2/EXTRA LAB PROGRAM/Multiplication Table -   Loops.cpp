/*Write a C program that takes an integer input from the user and prints its multiplication 
table using a for loop. 
Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N).*/

#include <stdio.h>
int main() {
    int num, range;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    printf("Enter the range: ");
    scanf("%d", &range);

    printf("\nMultiplication Table of %d (from 1 to %d):\n", num, range);

    
    for (int i = 1; i <= range; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}

