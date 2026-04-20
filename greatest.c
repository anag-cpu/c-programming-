#include<stdio.h>
main()
{
 int a,b,c;
 printf("Enter your no.s:  ");
 scanf ("%d,%d,%d",&a,&b,&c);
 if (a>b&&b>c)
    printf("a");
 else if (b>a&&b>c)
    printf("b");
 else 
    printf("c");
 return 0;
}
