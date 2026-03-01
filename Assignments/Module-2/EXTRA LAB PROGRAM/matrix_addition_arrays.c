/*Write a C program that accepts two 2x2 matrices from the user and adds them. Display the 
resultant matrix. 
Challenge: Extend the program to work with 3x3 matrices and matrix multiplication.*/

#include <stdio.h>
int main() {
    int mat1[2][2], mat2[2][2], result[2][2];
    

    printf("Enter elements of first 2x2 matrix:\n");
    for (int i = 0; i < 2; i++) 
	{
        for (int j = 0; j < 2; j++) 
		{
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of second 2x2 matrix:\n");
    for (int i = 0; i < 2; i++) 
	{
        for (int j = 0; j < 2; j++)
		 {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    // Matrix addition
    for (int i = 0; i < 2; i++) 
	{
        for (int j = 0; j < 2; j++) 
		{
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // Display result
    printf("\nResult Matrix (Addition):\n");
    for (int i = 0; i < 2; i++) 
	{
        for (int j = 0; j < 2; j++)
		 {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    
    //Challenge – 3×3 Matrix Addition & Multiplication
      
      
    int matrix1[3][3], matrix2[3][3], sum[3][3], multiresult[3][3];

    printf("Enter elements of first 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of second 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Matrix addition
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Matrix multiplication
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            multiresult[i][j] = 0;
            for (int k = 0; k < 3; k++) {
                multiresult[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Display sum
    printf("\nResultant Matrix (Addition):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    // Display result
    printf("\nResult Matrix (Multiplication):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", multiresult[i][j]);
        }
        printf("\n");
    }

    return 0;
}

