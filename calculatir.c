#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A simple calculator program that takes two numbers and
 *              performs basic arithmetic operations on them.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int num1, num2, result;
    char operator;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator)
    {
        case '+':
            result = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, result);
            break;

        case '/':
            if (num2 == 0)
            {
                printf("Error: Cannot divide by zero\n");
            }
            else
            {
                result = num1 / num2;
                printf("%d / %d = %d\n", num1, num2, result);
            }
            break;

        default:
            printf("Error: Invalid operator\n");
            break;
    }

    return (0);
}
