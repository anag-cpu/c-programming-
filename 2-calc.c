#include <stdio.h>
main()
{
    int a, b, ch, result;

    printf("1.Add  2.Sub  3.Mul  4.Div\n");
    scanf("%d", &ch);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (ch == 1)
        result = a + b;
    else if (ch == 2)
        result = a - b;
    else if (ch == 3)
        result = a * b;
    else if (ch == 4)
        result = a / b;
    else
    {
        printf("Invalid choice");
        return 0;
    }

    printf("Result = %d", result);

    return 0;
}

