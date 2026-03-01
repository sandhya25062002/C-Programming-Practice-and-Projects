/*Write a C program that takes a string as input and reverses it using a function. 
Challenge: Write the program without using built-in string handling functions.*/
#include<stdio.h>
void reverseString(char str[])
{
    int length = 0;  // To store length of string
    int i;
    char temp;

    // Manually find the length of the string
    while (str[length] != '\0')
    {
        length++;
    }

    
    for (i = 0; i < length / 2; i++)
    {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main()
{
    char str[500];

    printf("Enter a string: ");
    scanf("%[^\n]s", str);  // Reads string with spaces

    //reverseString(str);

    printf("Reversed string: %s\n", reverseString(str));

    return 0;
}

