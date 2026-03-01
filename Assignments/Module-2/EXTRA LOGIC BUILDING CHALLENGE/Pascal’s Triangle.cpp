/*Write a C program that generates Pascal’s Triangle up to N rows using loops. 
? Challenge: Implement the same program using a recursive function.*/

#include <stdio.h>
int nCr(int n, int r) {
    if (r == 0 || r == n) 
        return 1;
    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

int main() {
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    // --- Part 1: Pascal's Triangle using loops ---
    printf("\nPascal's Triangle (Using Loops):\n");
    for (i = 0; i < n; i++) {
    
        for (j = 0; j < n - i - 1; j++)
            printf("  ");
        
        int val = 1; // First value in a row is always 1
        for (j = 0; j <= i; j++) {
            printf("%4d", val);
           val = val * (i - j) / (j + 1); // Formula for next value
        }
        printf("\n");
    }

    
    printf("\nPascal's Triangle (Using Recursion):\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++)
            printf("  ");
        for (j = 0; j <= i; j++)
            printf("%4d", nCr(i, j));
        printf("\n");
    }

    return 0;
}

