/*Write a C program to check if a number is even or odd using an if-else 
statement. Extend the program using a switch statement to display the month 
name based on the user’s input (1 for January, 2 for February, etc.). */
#include<stdio.h>
int main()
{
   int num, month;
   printf("enter a number :");
   scanf("%d", &num);
   
   if(num%2==0){
   	
   	printf("The entered number is prime number");
   }
   else{
    printf("The entered number is odd number");
   }
   
   printf("\n");
   
   printf("enter number for checking number (1 to 12):");
   scanf("%d",&month);
   
   switch(month){
   	 
   	 case 1 : printf("january");
     break;
     case 2 : printf("february");
     break;
     case 3 : printf("march");
     break;
     case 4 : printf("april");
     break;
     case 5 : printf("may");
     break;
     case 6 : printf("june");
     break;
     case 7 : printf("july");
     break;
     case 8 : printf("august");
     break;
     case 9 : printf("september");
     break;
     case 10 : printf("october");
     break;
     case 11 : printf("november");
     break;
     case 12 : printf("december");
     break;
     default : printf("invalid input");

   }
   return 0;
   
}
