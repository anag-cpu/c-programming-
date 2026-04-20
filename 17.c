#include <stdio.h>

int main() {
    int n;
    float x, term, sum = 0;

    printf("Enter value of x (in radians): ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    term = x;   
    sum = term;

    for (int i = 1; i < n; i++) {
        term = -term * x * x / ((2 * i) * (2 * i + 1));
        sum += term;
    }

    printf("Sum of sine series = %f\n", sum);

    return 0;
}
