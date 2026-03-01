/*Write a C program that calculates the factorial of a number using a function. 
Include function declaration, definition, and call. */

#include<stdio.h>
int fect(int n);  // function declaration
int main()
{
	int num;
	printf("enter number :");
	scanf("%d", &num);
	
	fect(num);
	
	printf("%d fectorial is %d\n" , num , fect(num));  // function call
	return 0;
}

int fect(int n)
{
	if(n==0||n==1){
		return 1;
	}
	else{
		
		return n * fect(n-1);   // function defination
	}
}
