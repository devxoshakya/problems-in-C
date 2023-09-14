#include<stdio.h>
int main()
{
    int num, even, odd;
    printf("Enter the Number:\t");
    scanf("%d", &num);
    even = 0;
    odd = 0;
    for (int i = 0; i <= num; i++)
    {
       if(i%2==0)
       {
        even += i;
       }
       else
       {
        odd += i;
       }
    }
    printf("The sum of even and odd numers till %d is %d and %d", num, even, odd);
}