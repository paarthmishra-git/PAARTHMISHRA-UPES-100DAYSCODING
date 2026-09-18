//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main(void) {
    char operator;
    int a, b, result;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    switch (operator) {
        case '+':
            result = a + b;
            printf("%d + %d = %d\n", a, b, result);
            break;

        case '-':
            result = a - b;
            printf("%d - %d = %d\n", a, b, result);
            break;

        case '*':
            result = a * b;
            printf("%d * %d = %d\n", a, b, result);
            break;

        case '/':
            if (b != 0) {
                result = a / b;
                printf("%d / %d = %d\n", a, b, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        case '%':
            if (b != 0) {
                result = a % b;
                printf("%d %% %d = %d\n", a, b, result);
            } else {
                printf("Error: Modulo by zero is not allowed.\n");
            }
            break;

        default:
            printf("Error: Invalid operator entered.\n");
    }

    return 0;
}
