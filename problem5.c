// Write a program to create a simple calculator using the switch-case statement. The program should perform addition, subtraction, multiplication, and division based on user input.

#include <stdio.h>

int main() {
    char operetor;
    float num1, num2, res;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);


    printf("Enter a operator (+, -, *, /): ");
    scanf(" %c", &operetor);

 switch (operetor) {
        case '+':
        
            res = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, res);
            
            break;
        case '-':
            res = num1 - num2;
            
            printf("%.2f - %.2f = %.2f\n", num1, num2, res);
            
            break;
            
        case '*':
            res = num1 * num2;
            
            printf("%.2f * %.2f = %.2f\n", num1, num2, res);
            
            break;
            
        case '/':
        
            if (num2 != 0) {
                res = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, res);
            } else {
                printf("Error!.\n");
            }
            
            break;
            
        default:
            printf("Error! Operator is not correct.\n");
            break;
    }


    
    return 0;
}