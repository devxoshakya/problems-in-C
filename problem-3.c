#include<stdio.h>
#include<math.h>
int main()
{
    const float pi = 3.141592;
    float cir, radius;
    printf("input radius: ");
    scanf("%f",&radius);
    cir = 2*pi*radius;
    printf("circumference is %f", cir);
    return 0;


}
