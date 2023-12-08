#include <stdio.h>

// Function prototypes
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    float number1, number2;
    char operation;


    printf("1: ");
    scanf("%f", &number1);

    printf(" (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("2: ");
    scanf("%f", &number2);

    switch (operation) {
        case '+':
            printf("Result: %.2f\n", add(number1, number2));
            break;
        case '-':
            printf("Result: %.2f\n", subtract(number1, number2));
            break;
        case '*':
            printf("Result: %.2f\n", multiply(number1, number2));
            break;
        case '/':
            if (number2 != 0) {
                printf("Result: %.2f\n", divide(number1, number2));
            } else {
                printf("ты еблан чтобы на ноль делить???.\n");
            }
            break;
        default:
            printf("Error: invalid operation.\n");
    }

    return 0;
}

float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    return a / b;
}
