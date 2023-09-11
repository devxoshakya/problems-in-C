#include<stdio.h>
#include<math.h>
int main()
{
    float tempf, tempc;
    printf("input temp in C : ");
    scanf("%f",&tempc);
    tempf = (tempc*9/5)+32;
    printf("temp in F: %f",tempf);
    
    return 0;


}
