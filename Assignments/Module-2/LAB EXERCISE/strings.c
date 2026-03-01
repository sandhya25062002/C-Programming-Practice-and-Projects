#include <stdio.h>
#include <string.h>

int main()
 {
    char name[200], name1[100];

    
    printf("Enter first string: ");
    fgets(name, 200, stdin);
    name[strcspn(name, "\n")] = '\0'; 


    printf("Enter second string: ");
    fgets(name1, 200, stdin);
    name1[strcspn(name1, "\n")] = '\0';

    strcat(name," ");
    strcat(name, name1);
    
    printf("final result: %s\n", name);
    
    printf("Length of merge String: %lu\n", strlen(name));

    return 0;
}

