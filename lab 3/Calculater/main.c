#include <stdio.h>

void Add(int a, int b) {
    int sum = a + b;
    printf("Sum: %i + %i = %i\n", a, b, sum);
}

void Sub(int a, int b) {
    int subb = a - b;
    printf("SUB: %i - %i = %i\n", a, b, subb);
}

void Div(int a, int b) {
    if (b != 0) {
        int divv = a / b;

        printf("DIV: %i / %i = %i\n", a, b, divv);
    } else {
        printf("Division by zero \n");
    }
}

void Multi(int a, int b) {
    int mult = a * b;
    printf("MULTI: %d * %d = %d\n", a, b, mult);
}

int main() {
    int num1, num2;
    char operator;

    printf("Enter two Numbers: \n");
    scanf("%i %i", &num1, &num2);

    printf("Enter the operator \n");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            Add(num1, num2);
            break;

        case '-':
            Sub(num1, num2);
            break;

        case '/':
            Div(num1, num2);
            break;

        case '*':
            Multi(num1, num2);
            break;

        default:
            printf("NA\n");
            break;
    }

    return 0;
}
