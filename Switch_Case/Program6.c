#include <stdio.h>

int main()
{
   int amount;
   int d_type;
   scanf("%d",&amount);
   scanf("%d",&d_type);
   switch(d_type)
   {
       case 1:
        printf("Delivery=50");
        break;
        case 2:
        if(amount<1000)
        {
            printf("Delivery=100");
        }
        else if(amount>=1000)
        {
            printf("Delivery Free");
        }
        else {
            printf("Invalid Option");
            break;
        }
   }
   
    return 0;
}
