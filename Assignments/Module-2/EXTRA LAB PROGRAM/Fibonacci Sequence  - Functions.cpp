/*Write a C program that generates the Fibonacci sequence up to N terms using a recursive 
function. 
Challenge: Modify the program to calculate the Nth Fibonacci number using both iterative 
and recursive methods. Compare their efficiency.*/ 

#include <stdio.h>
int fibonaci(int n);
int fib_iterative(int n);
int main()
{
	int number;
	printf("enter the number of  terms : ");
	scanf("%d", &number);
	
    	printf("fibonaci series : ");
       // printf("%d", fibonaci(number));
	   for(int i =0; i < number;i++)
	 	{
    	printf("%d ", fibonaci(i));
       }
       
           int nth_rec = fibonaci(number-1);

    // Nth Fibonacci using iterative
           int nth_iter = fib_iterative(number-1);

    printf(" \nFibonacci number (Recursive) = %d\n", nth_rec);
    printf(" Fibonacci number (Iterative) = %d\n", nth_iter);


 return 0;
}
	

int fibonaci(int n)
{
	if(n==0){
	   return 0;
	}
	else if(n==1){
		return 1;
	}
	else{
		return
		       fibonaci(n-1) + fibonaci(n-2);
	}
	
	
}
int fib_iterative(int n)
	 {
    if (n == 0) return 0;
    if (n == 1) return 1;
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;}
