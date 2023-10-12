#include<stdio.h>
void main()
{
    int x,y;
    printf("enetr x coordiantes :");
    scanf("%d", &x);
    printf("enetr y coordiantes :");
    scanf("%d", &y);
    if(x>0){
        if(y>0){
            printf("1 Quadrant!!!");
        }
        else{
            ("4 Quadrant!!!");
        }
    }
    else{
         if (x==0 && y==0)
    {
        printf("1 quadrant!!!");
    }
    else{
        if (y>0)
        {
          printf("2 Quadrant!!!");  
        }
        else{
            printf("3 Quadrant!!!");
        }
    }   
    }

   
    
}