#include <stdio.h>

int main()
{
     int a,age;
     scanf("%d",&a);
     scanf("%d",&age);
     int total =0;
     switch(a)
     {
         case 1:
                
         if(age<12)
         {
              int amount=300;
             int total=(amount*50)/100;
             printf("%d",total);
             
         }
         else if(age>=60)
         {
            int amount=300;
            int total= amount -(amount*33)/100;
            printf("%d",total);
         }
         break;
         case 2:
            
         if(age<12)
         {
             int amount=1000;
            int total=(amount*50)/100;
             printf("%d",total);
         }
         else{
             int amount=1000;
             printf("%d",amount);
         }
     }

    return 0;
}
