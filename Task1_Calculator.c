/*
 * CodeAlpha C Programming Internship
 * TASK 1: Basic - Calculator Program
 * Performs Addition, Subtraction, Multiplication, Division using switch case
 */

#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;
    int choice;

    printf("===== Simple Calculator =====\n");
    printf("Select Operation:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("Enter choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (choice) {
        case 1:
            operator = '+';
            result = num1 + num2;
            printf("\nResult: %.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);
            break;

        case 2:
            operator = '-';
            result = num1 - num2;
            printf("\nResult: %.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);
            break;

        case 3:
            operator = '*';
            result = num1 * num2;
            printf("\nResult: %.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);
            break;

        case 4:
            operator = '/';
            if (num2 == 0) {
                printf("\nError: Division by zero is not allowed!\n");
            } else {
                result = num1 / num2;
                printf("\nResult: %.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);
            }
            break;

        default:
            printf("\nInvalid choice! Please select between 1 and 4.\n");
            break;
    }

    return 0;
}