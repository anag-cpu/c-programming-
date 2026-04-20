#include <stdio.h>

int main() {
    int choice, x, y, i, fact = 1;
    float result;

    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power (x^y)\n");
    printf("6. Factorial (x!)\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
            printf("Enter two numbers: ");
            scanf("%d %d", &x, &y);
            printf("Result = %d\n", x + y);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%d %d", &x, &y);
            printf("Result = %d\n", x - y);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%d %d", &x, &y);
            printf("Result = %d\n", x * y);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%d %d", &x, &y);
            printf("Result = %.2f\n", (float)x / y);
            break;

        case 5:
            printf("Enter x and y: ");
            scanf("%d %d", &x, &y);
            result = 1;
            for(i = 1; i <= y; i++)
                result = result * x;
            printf("Result = %.0f\n", result);
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%d", &x);
            for(i = 1; i <= x; i++)
                fact = fact * i;
            printf("Factorial = %d\n", fact);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
