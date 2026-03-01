/*LAB EXERCISE:3
Write a C program that accepts two integers from the user and performs 
arithmetic, relational, and logical operations on them. Display the results.*/
#include<stdio.h>
int main()
{
	int a , b;
	printf("enter 1st number :");
	scanf("%d", &a);
	
	printf("enter 2nd number :");
	scanf("%d", &b);
	
	printf("\n");
	
	// arithmatic operation 
	printf("Arithmatic:\n");
	
	printf("sum of %d and %d is : %d\n", a , b, a+b);
    printf("subtraction of %d and %d is : %d\n", a , b, a-b);
	printf("multiplication of %d and %d is : %d\n", a , b, a*b);
	printf("division of %d and %d is : %d\n", a , b, a/b);
	printf("module of %d and %d is : %d\n", a , b, a%b);
	
	// relational operator 
	
	printf("\n");
	
	printf("reletional :\n");
	
	printf("a<b  : %d\n", a<b);
	printf("a<=b : %d\n", a<=b);
	printf("a==b : %d\n", a==b);
	printf("a>b  : %d\n", a>b);
	printf("a>=b : %d\n", a>=b);
	
	// logical operatior 
	
	printf("\n");
	
	printf("a&&b : %d\n", a&&b);
	printf("a||b : %d\n", a||b);
	printf("a!=b : %d\n", a!=b);
	
	
	
	
		
	return 0;
}
