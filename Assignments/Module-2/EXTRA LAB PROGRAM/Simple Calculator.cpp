#include <stdio.h>

int main()
 {
    double num1, num2;
    char op;
    char choice;
  do{
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (op) {
        case '+':
            printf("Result: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %.2lf\n", num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        case '%':
            if ((int)num2 != 0)
            
               printf("Result: %d\n", (int)num1 % (int)num2);     // modulus works with integers
                
            else
                printf("Error: Modulus by zero is not allowed.\n");
               
            break;
            
        default:
            printf("Error: Invalid operator '%c'. Please use +, -, *, /, or %%.\n", op);
    }
                  // Ask user to continue or exit
                  
                 printf("Do you want to perform another operation? (y/n): ");
                 scanf(" %c", &choice);

                } while(choice == 'y' || choice == 'Y');

               printf("Calculator closed.\n");
                 return 0;
}
