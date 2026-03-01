/*Write a C program that counts the number of words in a sentence entered by the user. 
Challenge: Modify the program to find the longest word in the sentence.*/

#include <stdio.h>
#include <string.h>
int main() {
    char sentence[200], longest[50];
    int i, count = 0, length = 0, maxLength = 0;
    char current[50]; // To store each word temporarily
    int j = 0;         // Index for current word

    printf("Enter a sentence: ");
    //fgets(sentence, 200, stdin);
    gets(sentence);

    
    sentence[strcspn(sentence, "\n")] = '\0';

    for (i = 0; i <= strlen(sentence); i++) {
        if (sentence[i] != ' ' && sentence[i] != '\0') {
            current[j++] = sentence[i]; // Build current word
        } else {
            if (j > 0) { // A complete word found
                current[j] = '\0';
                count++;

                length = j;
                if (length > maxLength) {
                    maxLength = length;
                    strcpy(longest, current);
                }
                j = 0; // Reset for next word
            }
        }
    }

    printf("\nNumber of words: %d\n", count);
    printf("Longest word: %s\n", longest);
    printf("Length of longest word: %d\n", maxLength);

    return 0;
}

