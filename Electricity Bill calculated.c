#include <stdio.h>

int main()
{
    int unit,slab_rate,total_rate;
   
   scanf("%d",&unit);
   if(0>=unit && unit<=1000)
    {
     if(unit>0 && unit<500)
     {
        slab_rate = 5;
        total_rate = unit*slab_rate;
        printf("Bill Amount:%d",total_rate);
     }
     else
     {
        slab_rate= 10;
        total_rate = unit*slab_rate;
        printf("Bill Amount:%d",total_rate);
     }
    }
    else
    {
        printf("Invalid inputs");
    }
    return 0;
}