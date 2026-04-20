#include <stdio.h>

int factRec(int n) {
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factRec(n - 1);
}

int main() {
    int n, i, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial without recursion = %d\n", fact);

    printf("Factorial with recursion = %d\n", factRec(n));

    return 0;
}