#include <stdio.h>
void main()
{
    int a,b,c,d,e,sum;
    float avg;
    printf("input a:");
    scanf("%d",&a);
    printf("input b:");
    scanf("%d",&b);
    printf("input c:");
    scanf("%d",&c);
    printf("input d:");
    scanf("%d",&d);
    printf("input e:");
    scanf("%d",&e);
    sum = (a+b+c+d+e);
    avg = (float)sum/5;
    printf("sum of marks is %d and percentage is %f", sum, avg);

}