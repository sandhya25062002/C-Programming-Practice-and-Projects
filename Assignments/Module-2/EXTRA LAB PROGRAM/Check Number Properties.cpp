/*Write a C program that takes an integer from the user and checks the following using 
different operators: 
Whether the number is even or odd. 
Whether the number is positive, negative, or zero. 
Whether the number is a multiple of both 3 and 5.*/
#include<stdio.h>
int main()
{
	int num;
	
	printf("enter a number : ");
	scanf("%d", &num);
	
	// check the number is even or odd
	
	if(num % 2==0){
		
		printf("THE  GIVEN NUMBER  IS EVEN !\n");
	}
	else{
		
		printf("THE GIVEN NUMBER IS ODD !\n");
	}
	
	// check number is positive , nagetive or zero
	
	if(num>0){
		
		printf("THE GIVEN NUMBER IS POSITIVE NUMBER !\n");
	}
	else if(num<0){
		printf("THE GIVEN NUMBER IS NEGETIVE !\n");
	}
	else{
		printf("THE GIVEN NUMBER IS ZERO!\n");
	}
	// check the number is multiple of both 3 and 5 
	
	if(num % 3==0 && num % 5==0)
	{
		printf("THE NUMBER IS MULTIPLE OF BOTH 3 AND 5 !");
	}
	else{
		printf("THE NUMBER IS NOT MULTIPLE OF BOTH 3 AND 5 !");
	}
	return 0;
}


