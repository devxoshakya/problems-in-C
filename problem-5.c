#include<stdio.h>
int main()
{
   int a,b,c;
   printf("enter first numer :");
   scanf("%d", &a);
   printf("enter second numer :");
   scanf("%d", &b);
   printf("entered number are %d and %d first and second respectively!!",a,b);
   c = a;
   a = b;
   b = c;
   printf("\nswaped number are %d and %d first and second respectively!!",a,b);
   return 0;


}