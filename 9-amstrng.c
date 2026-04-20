#include<stdio.h>
main()
{
 int n,a,b,c;
 
 printf("Enter Your Number : ");
 scanf("%d",&n);
   a = n / 100;        
   b = (n / 10) % 10; 
   c = n - (a * 100 + b * 10);
        
 if(n==a*a*a+b*b*b+c*c*c)
   printf("Is an Amstrong Number");
  else
   printf("NOT AN AMSTRONG NO");
  
  return 0;
}
