/**Write a C program that takes a number as input and checks whether it is a palindrome using 
a function. 
Challenge: Modify the program to check if a given string is a palindrome */
#include<stdio.h>
#include <string.h>

// Function to check number palindrome
int pelindrom(int n)
{
    int original = n, reversed = 0, digit;
    while (n != 0)
    {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }
    return (original == reversed);
}

int main()
{
    int num;
    char name[500];
    int result = 1;

    // Number Palindrome
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (pelindrom(num))
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);

    // String Palindrome
    printf("Enter a string: ");
    scanf("%s", name);

    int length = strlen(name);

    for (int i = 0; i < length / 2; i++)
    {
        if (name[i] != name[length - i - 1])
        {
            result = 0;
            break;
        }
    }

    if (result == 1)
        printf("\"%s\" is a palindrome.\n", name);
    else
        printf("\"%s\" is not a palindrome.\n", name);

    return 0;
}

