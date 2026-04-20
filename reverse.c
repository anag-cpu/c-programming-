#include <stdio.h>
 main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        printf("%d", n);
        n--;
    }

    return 0;
}

