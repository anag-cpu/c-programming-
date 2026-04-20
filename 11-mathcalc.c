#include<stdio.h>
main()
{
 int a, b;
    

    printf("\n--- CALCULATOR ---\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power\n");
    printf("6. Square Root\n");
    printf("7. Sin\n");
    printf("8. Cos\n");
    printf("9. Tan\n");
    printf("10. Absolute value\n");
    printf("11. Ceil\n");
    printf("12. Floor\n");

    printf("\nEnter your choice: ");
    scanf("%d,%d", &a,&b);
    
    switch (choice)
    {
        case 1:
            scanf("%lf %lf", &a, &b);
            printf("Result = %lf", a + b);
            break;

        case 2:
            scanf("%lf %lf", &a, &b);
            printf("Result = %lf", a - b);
            break;

        case 3:
            scanf("%lf %lf", &a, &b);
            printf("Result = %lf", a * b);
            break;

        case 4:
            scanf("%lf %lf", &a, &b);
            printf("Result = %lf", a / b);
            break;

        case 5:
            scanf("%lf %lf", &a, &b);
            printf("Result = %lf", pow(a, b));
            break;

        case 6:
            scanf("%lf", &a);
            printf("Result = %lf", sqrt(a));
            break;

        case 7:
            scanf("%lf", &a);
            printf("Result = %lf", sin(a));
            break;

        case 8:
            scanf("%lf", &a);
            printf("Result = %lf", cos(a));
            break;

        case 9:
            scanf("%lf", &a);
            printf("Result = %lf", tan(a));
            break;

        case 10:
            scanf("%lf", &a);
            printf("Result = %lf", fabs(a));
            break;

        case 11:
            scanf("%lf", &a);
            printf("Result = %lf", ceil(a));
            break;

        case 12:
            scanf("%lf", &a);
            printf("Result = %lf", floor(a));
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}

    
