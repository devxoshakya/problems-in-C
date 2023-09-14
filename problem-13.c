#include<stdio.h>
int main()
{
    int num, count;
    printf("Enter the Number:\t");
    scanf("%d",&num);
    count = 1;
    for (int i = 1; i <= num ; i++)
    {
        count *= i;
    }

    printf("The Factorial of %d is %d", num, count);
    

}