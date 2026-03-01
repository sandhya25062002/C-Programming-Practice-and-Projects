/*Write a C program that checks whether a given number is a prime number or not using a for 
loop. Challenge: Modify the program to print all prime numbers between 1 and a given number.*/

#include <stdio.h>
int main()
 {
    int num, i, Prime;

    //Part 1: Check if a single number is prime ----
    
    printf("Enter a number : ");
    
    scanf("%d", &num);

    Prime = 1; // Assume prime until proven otherwise

    if (num <= 1)
	 {
        Prime = 0; // 0 and 1 are not prime
    } else {
        for (i = 2; i <= num/2; i++) 
		{
            if (num % i == 0) {
                Prime = 0;
                break;
            }
        }
    }

    if (Prime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is NOT a prime number.\n", num);

    // ---- Part 2: Print all prime numbers from 1 to N ----
    
    printf("\nEnter a number to list all primes up to it: ");
    scanf("%d", &num);

    printf("Prime numbers between 1 and %d are:\n", num);

    for (int n = 1; n <= num; n++) {
        Prime = 1;
        for (i = 2; i <= n/2; i++) {
            if (n % i == 0) {
                Prime = 0;
                break;
            }
        }
        if (Prime)
            printf("%d ", n);
    }
    printf("\n");

    return 0;
}

