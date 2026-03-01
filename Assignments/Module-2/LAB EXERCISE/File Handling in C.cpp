#include <stdio.h>

int main() {
    FILE *file;
    char str[] = "Hello! This string is written to the file.";

    // Step 1: Create and open the file for writing ("w" mode)
    file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Error: Could not create the file.\n");
        return 1;
    }

    // Step 2: Write the string to the file
    fputs(str, file);

    // Step 3: Close the file
    fclose(file);

    // Step 4: Reopen the file for reading ("r" mode)
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open the file for reading.\n");
        return 1;
    }

    // Step 5: Read and display the contents
    char ch;
    printf("File contents:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    // Step 6: Close the file again
    fclose(file);

    return 0;
}

