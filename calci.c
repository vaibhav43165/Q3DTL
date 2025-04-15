// calculator_hex.c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    printf("Select Mode:\n");
    printf("1. Decimal Calculator\n");
    printf("2. Hexadecimal Calculator\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        double num1, num2;
        char operator;
        printf("Decimal Calculator\n");
        printf("Enter an expression (e.g., 5 + 3): ");
        scanf("%lf %c %lf", &num1, &operator, &num2);

        switch (operator) {
            case '+':
                printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
                break;
            case '-':
                printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
                break;
            case '*':
                printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
                break;
            case '/':
                if (num2 != 0)
                    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
                else
                    printf("Error: Division by zero!\n");
                break;
            default:
                printf("Invalid operator\n");
        }
    } else if (choice == 2) {
        unsigned int hex1, hex2, result;
        char operator;
        printf("Hexadecimal Calculator\n");
        printf("Enter first hex number (e.g., A2): ");
        scanf("%x", &hex1);
        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &operator); // space before %c to clear buffer
        printf("Enter second hex number (e.g., 1F): ");
        scanf("%x", &hex2);

        switch (operator) {
            case '+':
                result = hex1 + hex2;
                break;
            case '-':
                result = hex1 - hex2;
                break;
            case '*':
                result = hex1 * hex2;
                break;
            case '/':
                if (hex2 != 0)
                    result = hex1 / hex2;
                else {
                    printf("Error: Division by zero!\n");
                    return 1;
                }
                break;
            default:
                printf("Invalid operator\n");
                return 1;
        }

        printf("Result in Hex: %X\n", result);
    } else {
        printf("Invalid choice!\n");
    }

    return 0;
}

//dfsakslhgkjsdgjds