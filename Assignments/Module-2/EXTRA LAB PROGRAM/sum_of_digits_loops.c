/*Write a C program that takes an integer from the user and calculates the sum of its digits 
using a while loop. 
Challenge: Extend the program to reverse the digits of the number*/

#include <stdio.h>
int main() {
    int num, sum = 0, reverse = 0, digit, original;

    printf("Enter a  number : ");
    scanf("%d", &num);

    original = num; 

    
    while (num != 0) {
        digit = num % 10;         // Extract last digit
        sum += digit;             // Add to sum
        reverse = reverse * 10 + digit; // Build reverse number
        num /= 10;                // Remove last digit
    }

    // Output results
    printf("Sum of digits of %d = %d\n", original, sum);
    printf("Reverse of %d = %d\n", original, reverse);

    return 0;
}

