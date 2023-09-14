#include<stdio.h>
int main()
{
    int num, count;
    printf("Enter the Number:\t");
    scanf("%d", &num);
    for (int i = 2; i < num; i++)
    {
        if(num%i==0)
        {
            printf("The number is not prime.");
        }
        else
        {
            printf("The number is prime.");
        }
    }
    
}