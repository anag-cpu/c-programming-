#include <stdio.h>
main() 
{
    int i;

    for (i = 1; i <= 500; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}

