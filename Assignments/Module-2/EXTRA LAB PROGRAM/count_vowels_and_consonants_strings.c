/*Write a C program that takes a string from the user and counts the number of vowels and 
consonants in the string. 
Challenge: Extend the program to also count digits and special characters.*/
#include <stdio.h>
int main()
{
    char str[500];
    int vowels = 0, consonants = 0, digits = 0, special = 0;
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str); 

    while (str[i] != '\0')
    {
        char ch = str[i];

        // Check for vowels (case-insensitive)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowels++;
        }
        // Check for consonants (alphabets but not vowels)
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            consonants++;
        }
        // Check for digits
        else if (ch >= '0' && ch <= '9')
        {
            digits++;
        }
        // Special characters (anything else that's not space)
        else if (ch != ' ')
        {
            special++;
        }

        i++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);

    return 0;
}

