/*Write a C program that checks whether a given number is an Armstrong number or not (e.g., 
153 = 1^3 + 5^3 + 3^3). 
Challenge: Write a program to find all Armstrong numbers between 1 and 1000. */

#include <stdio.h>
#include <math.h>
int isArmstrong(int num)
 {
    int originalNum = num, remainder, n = 0;
    double result = 0.0;

    
    while (originalNum != 0)
	{
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    return ((int)result == num);
    
    
}

int main() {
    int num;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    
    printf("\nArmstrong numbers between 1 and 1000 are:\n");
    for (int i = 1; i <= 1000; i++) {
        if (isArmstrong(i))
            printf("%d ", i);
    }

    return 0;
}

