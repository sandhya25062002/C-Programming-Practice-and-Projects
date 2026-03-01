/* Write a C program that uses the break statement to stop printing numbers 
when it reaches 5. Modify the program to skip printing the number 3 using the 
continue statement. */
#include<stdio.h>
int main()
{
	 //  using break
	 printf("using break\n");
	 
	for(int i=0;i<=10;i++){
		
		printf("%d\n", i);
		
		if(i==5){
			break;
		}
	}
	
	 printf("\n");
	// using continue
	printf("using continue\n");
	
	for(int i=0;i<=5;i++){
		
		if(i==3){
		continue;
		}
		printf("%d\n", i);
	}
	   
	return 0;
}

