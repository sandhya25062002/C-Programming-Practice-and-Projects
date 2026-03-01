/*Write a C program that stores 5 integers in a one-dimensional array and prints 
them. Extend this to handle a two-dimensional array (3x3 matrix) and 
calculate the sum of all elements.*/
#include<stdio.h>
int main()
{
	int arr[5];
	
	printf("enter 5 numbers\n");
	
	 for(int i=0; i<5; i++)
	 {
	 	printf("arr[%d]",i);
	 	scanf("%d", &arr[i]);
   	}
	 	
	 	printf("\n");
	 	
	 	printf("entered number :\n");
	 	
	 	for(int i =0; i<5;i++){
	 		
	 		printf("arr[%d] = %d\n", i , arr[i]);
		 }
		 
		 printf("\n");
		 
		 // two dimensial array 3x3  matrix and sum of all elements
		 
		 int matrix[3][3];
		 int sum = 0;
		 
		 printf("enter element of 3x3 matrix:\n");
		 for(int i =0;i<3;i++){
		 	for(int j =0;j<3;j++)
		 	{
		 		printf("element of [%d][%d]",i , j);
		 		scanf("%d",&matrix[i][j]);
		 		sum += matrix[i][j];
			 }
		 }
		 
		 printf("Matrix is:\n");
			 for(int i=0;i<3;i++){
			 	for(int j=0;j<3;j++){
			 		printf("%d ", matrix[i][j]);}
			 		printf("\n");
				 }
				 
		          
		 
		  printf("Sum of all elements in the matrix = %d\n", sum);
	
	  return 0;
}
