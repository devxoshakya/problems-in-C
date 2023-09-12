#include<stdio.h>
int main()
{
   int a,b,c;
   printf("enter first numer :");
   scanf("%d", &a);
   printf("enter second numer :");
   scanf("%d", &b);
   printf("enter third numer :");
   scanf("%d", &c);

   if(a>b && a>c){
      printf("%d is greatest!!",a);
   }
   else if (b>c && b>a)
   {
    printf("%d is the greatest!!", b);
   }
   else{
    printf("%d is greatest !!", c);
   }
   return 0;
}