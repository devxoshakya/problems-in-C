#include <stdio.h>

int main()
{   int sum, num;
    printf("Enter the number : ");
    scanf("%d", &num);
    sum = (num*(num+1))/2;
    printf("the sum of numbers upto %d is %d",num, sum);
    
    return 0;
}