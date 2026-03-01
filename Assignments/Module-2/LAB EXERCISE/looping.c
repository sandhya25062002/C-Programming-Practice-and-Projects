/*Write a C program to print numbers from 1 to 10 using all three types of loops 
(while, for, do-while).*/
#include<stdio.h>
int main()
{
	int i = 1;
	
	// USING WHILE LOOP 
	
	printf("while loop\n");
	
	while(i<=10){
		
		printf("%d\n",i);
		i++;
	}
	
	// for loop 
	
	printf("for loop \n");
	
	for(i = 1 ; i <=10; i++){
		
		printf("%d\n",i);
	}
	
	
	printf("using do while loop \n");
	i = 1; 
	do
	{
		printf("%d\n",i);
		i++;
		
	}
     	while(i<=10);
	
	return 0;
}
