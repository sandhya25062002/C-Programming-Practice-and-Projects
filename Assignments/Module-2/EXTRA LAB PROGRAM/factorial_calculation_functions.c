#include <stdio.h>
#include <time.h>  

unsigned long long factorial_iterative(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}


unsigned long long factorial_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial_recursive(n - 1);
}

int main() {
    int number;
    clock_t start, end;
    double time_iter, time_rec;

    printf("Enter a number: ");
    scanf("%d", &number);

    
    start = clock();
    unsigned long long fact_iter = factorial_iterative(number);
    end = clock();
    time_iter = ((double)(end - start)) / CLOCKS_PER_SEC;

    
    start = clock();
    unsigned long long fact_rec = factorial_recursive(number);
    end = clock();
    time_rec = ((double)(end - start)) / CLOCKS_PER_SEC;

    
    printf("\nIterative Factorial of %d = %llu", number, fact_iter);
    printf("\nRecursive Factorial of %d = %llu", number, fact_rec);

    printf("\n\nExecution Time:");
    printf("\nIterative: %lf seconds", time_iter);
    printf("\nRecursive: %lf seconds\n", time_rec);

    return 0;
}

