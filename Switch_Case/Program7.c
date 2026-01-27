#include <stdio.h>

int main()
{
   int a_type;
   int year;
   scanf("%d",&a_type);
   scanf("%d",&year);
   switch(a_type)
   {
       case 1:
            printf("Interest 4%");
            break;
        case 2:
            if(year<=3)
                {
                     printf("Interest 5%");
                 }
            else if(year>3)
                {
                    printf("Interest 7%");
                }
             else 
                {
                    printf("Invalid Option");
                    
                }
                break;
        default:
            printf("Invalid Input");
   }
   
    return 0;
}
