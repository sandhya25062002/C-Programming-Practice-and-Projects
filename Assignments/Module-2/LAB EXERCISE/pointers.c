/*Write a C program to demonstrate pointer usage. Use a pointer to modify the 
value of a variable and print the result.*/ 
#include <stdio.h>
main()
  {
    int num = 10;        
    int *ptr;              

    ptr = &num;            

    printf("Original value of num: %d\n", num);

    // Modify the value of num using pointer
    *ptr = 20;

    printf("Modified value of num using pointer: %d\n", num);
    printf("Address of num: %u\n", &num);
    printf("Pointer ptr is pointing to address: %u\n", ptr);
    printf("Value at the pointer ptr: %d\n", *ptr);

    return 0;
}

