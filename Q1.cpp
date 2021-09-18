#include <stdio.h>
int main()
{
   long double a;
   printf("enter a number\n");
   scanf("%Lf", &a);
   if(a/10==0)
   printf("invalid");
   else
   printf("valid");
   
}