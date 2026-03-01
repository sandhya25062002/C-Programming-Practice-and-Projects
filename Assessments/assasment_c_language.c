#include<stdio.h>
main()
{
	int matrix1[2][2];
	int matrix2[2][2];
	int result [2][2];
	
	printf("enter elements of matrix 1\n");
	
	 for(int i=0;i<2;i++)
	 {
	 	for(int j=0;j<2;j++)
		 {
	 		printf("matrix1[%d][%d]:" , i , j);
	 		scanf("%d", &matrix1[i][j]);
		 }
	 }
	  printf("\n");
	  
	 printf("enter eliments of matrix 2\n");
	    for(int i=0;i<2;i++)
		{
	    	for(int j=0;j<2;j++)
			{
	    		printf("matrix2[%d][%d]:" , i , j);
	 		     scanf("%d", &matrix2[i][j]);
			}
		}
		printf("\n");
	
		 for(int i =0;i<2; i++)
		 {
		 	for(int j=0;j<2;j++)
			 {
		 		result[i][j] = 0;
		 		for(int k=0;k<2;k++)
				 {
		 			result[i][j] += matrix1[i][k] * matrix2[k][j];
				 }
		 		               
			 }
			 
			 
		 }
		   printf("result of matrix1 * matrix2 :\n");
		   
		   
		     for(int i = 0; i<2; i++)
			 {
		     	for(int j = 0; j<2; j++)
				 {
		     		
		     		printf("%d ", result[i][j]);
				 }
				 
				   printf("\n");
			 }
	         
}

