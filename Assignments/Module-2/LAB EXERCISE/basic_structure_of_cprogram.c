/*LAB EXERCISE:2
Write a C program that includes variables, constants, and comments. Declare 
and use different data types (int, char, float) and display their values. */

#include<stdio.h>
int main()
{
	// variable 
	int age = 23; // int data type 
	float percentage = 63.56; // float data type
	char grade = 'b';  // char data type
	
	// constant value can not change 
	const int roll_number = 53;
	
	printf("students details\n");
	printf("-----------\n");
	printf("roll number is %d\n", roll_number);
	printf("age is : %d\n", age);
	printf("percentage is : %.2f\n", percentage);
	printf("grade is : %c", grade);
	
	return 0;
}
