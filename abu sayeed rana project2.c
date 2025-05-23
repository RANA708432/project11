
#include <stdio.h>

double calculatePower(double base, double exponent) {
    return pow(base, exponent);
}

int main() {
    int choice;
    double num1, num2, result;

    while (1) {
        printf("\nError 404: Brain Not Found!\n");
        printf("------------------\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power\n");
        printf("6. Exit\n");
        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);

        if (choice == 6) {
            printf("\nAdios, Amigo! May your variables be well-defined.\n");
            printf("\n---------------------------------\n");
            printf("Developed by Uzz@l Sarkar[CSE_64E]\n");
            printf("---------------------------------\n");
            break;
        }
        if (choice >= 1 && choice <= 4) {
            printf("Enter first number: ");
            scanf("%lf", &num1);
            printf("Enter second number: ");
            scanf("%lf", &num2);
        }
        if (choice == 1)
            result = num1 + num2;
        else if (choice == 2)
            result = num1 - num2;
        else if (choice == 3)
            result = num1 * num2;
        else if (choice == 4) {
            if (num2 == 0) {
                printf("Cannot divide by zero.\n");
                continue;
            }
            result = num1 / num2;
        }
        else if (choice == 5) {
            double base, exponent;
            printf("Enter the base: ");
            scanf("%lf", &base);
            printf("Enter the exponent: ");
            scanf("%lf", &exponent);
            result = calculatePower(base, exponent);
        }
        else {
            printf("Invalid choice.\n");
            continue;
        }
        printf("Result: %.2lf\n", result);
    }
    return 0;
}
