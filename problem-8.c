#include<stdio.h>
int main()
{
   int year;
   printf("enter year (e.g. - 2023) : ");
   scanf("%d", &year);

   if(year%4==0){
        printf("%d is a leap year.", year);
   }
   else
   {
    printf("%d is not a leap year!!", year);
   }
   return 0;

}