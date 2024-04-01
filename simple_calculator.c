#include <stdio.h>


void add(double a, double b);
void subtract(double a, double b);
void multiply(double a, double b);
void divide(double a, double b);


void add(double a, double b) {
    double answer = a + b;
    printf("Adding %.2lf and %.2lf equals %.2lf\n", a, b, answer);
}

void subtract(double a, double b) {
    double answer = a - b;
    printf("Subtracting %.2lf from %.2lf equals %.2lf\n", b, a, answer);
}

void multiply(double a, double b) {
    double answer = a * b;
    printf("Multiplying %.2lf by %.2lf equals %.2lf\n", a, b, answer);
}

void divide(double a, double b) {
    if (b != 0) {
        double answer = a / b;
        printf("Dividing %.2lf by %.2lf equals %.2lf\n", a, b, answer);
    } else {
        printf("Error. Cant divide by 0\n");
    }
}

int main() {
    void (*functions[4])(double, double) = {add, subtract, multiply, divide};

    int choice;
    double num1, num2;

    do {
        printf("Welcome to Simple Calculator!\n please choose one of the options below:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
            case 2:
            case 3:
            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                functions[choice - 1](num1, num2);
                break;
            case 5:
                printf("You are now leaving the simple calculator program.\n");
                break;
            default:
                printf("Please make sure to enter a number between 1 and 5.\n\n");
                break;
        }
    } while (choice != 5);

    return 0;
}
