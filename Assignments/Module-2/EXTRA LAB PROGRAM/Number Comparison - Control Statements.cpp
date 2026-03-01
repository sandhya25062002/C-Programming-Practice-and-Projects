/*Write a C program that takes three numbers from the user and determines: 
The largest number. 
The smallest number. 
Challenge: Solve the problem using both if-else and switch-case statements.*/
#include<stdio.h>
int main()
{
	int number1 , number2 , number3;
	
	printf("enter 1st number :\n");
	scanf("%d", &number1);
	
	printf("enter 2nd number : \n");
	scanf("%d", &number2);
	
	printf("enter 3rd number :\n");
	scanf("%d", &number3);
	
	printf("\n");
	
	if(number1 >= number2 && number1 >= number3)
	{
		printf("%d is largest number !\n", number1);
	}
	else if(number2 >= number1 && number2 >= number3)
	{
		printf("%d is largest number !\n", number2);
	}
	else
	{
		printf("%d is largest number !\n", number3);
	}
	 printf("\n");
	 
	// check smallest number 
	
	if(number1 <= number2 && number1 <= number3){
		printf("%d is smallest number !\n", number1);
	}
	else if(number2 <= number1 && number2 <= number3){
		printf("%d is smallest number !\n", number2);
	}
	else {
		printf("%d is smallest number !\n", number3);
	}
	 printf("\n");
	// with switch case statment 
	
	int largest  , smallest;
	
	if (number1 >= number2 && number1 >= number3)
    {
        largest = number1;
        
     } else if (number2 >= number1 && number2 >= number3)
	 {
        largest = number2;
    } 
	else
	{
        largest = number3;
    }

    if (number1 <= number2 && number1 <= number3) 
	 {
        smallest = number1;
        
     } else if (number2 <= number1 && number2 <= number3) 
	 {
        smallest = number2;
     } 
	 else
	 {
        smallest = number3;
     }  
	switch(1)
	{
		case 1: printf("largest number is %d:\n" , largest);
		        printf("smallest number is %d:\n", smallest);
		        break;
		default :
		        printf("something wrong");
		
	}
	
	
	
	return 0;
}
