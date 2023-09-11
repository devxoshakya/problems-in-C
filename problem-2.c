#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,si,ci,rt;
    printf("input principle: ");
    scanf("%f",&p);
    printf("input rate: ");
    scanf("%f",&r);
    printf("input time: ");
    scanf("%f",&t);
    rt = r/100;
    si = p*rt*t;
    ci = p*(pow((rt)+1,t))-p;
    printf("simple intrest is : %f", si);
    printf("\ncompound intrest is : %f", ci);
    return 0;


}
