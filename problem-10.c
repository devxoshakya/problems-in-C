#include <stdio.h>
int main()
{
    int a,b,c,d,e,sum;
    float avg;
    printf("input marks-1:");
    scanf("%d",&a);
    printf("input marks-2:");
    scanf("%d",&b);
    printf("input marks-3:");
    scanf("%d",&c);
    printf("input marks-4:");
    scanf("%d",&d);
    printf("input marks-5:");
    scanf("%d",&e);
    sum = (a+b+c+d+e);
    avg = (float)sum/5;

    if(avg>90 && avg<100){
        printf("A GRADE");
    }
    else if (avg<90 && avg>80)
    {
        printf("B GRADE");
    }
    else if (avg<80 && avg>60)
    {
        printf("C GRADE");
    }
    else{
        printf("D GRADE");
    }
    return 0;
};