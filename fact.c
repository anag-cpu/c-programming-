#include <stdio.h>
main() 
{
    int num, i, factorial;

    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }
    if (num == 0) {
        factorial = 1;
    } else {
        factorial = 1;
        i = 1;
        while (i <= num) {
            factorial *= i; 
            i++;
        }
    }

    printf("Factorial of %d is %d\n", num, factorial);

    return 0;
}


