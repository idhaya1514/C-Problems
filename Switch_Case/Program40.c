#include <stdio.h>

int main() {
        int year;
        scanf("%d",&year);
        switch(year)
        {
              case 0: case 1:
                printf("Under Warrenty");
                break;
            case 2 : 
                printf("Limited Warrenty");
                break;
            default:
            if(year>2 && year<=year)
            {
                printf("Out Of Warrenty");
            }
            else{
                printf("Invalid Inputs");
              } 
         }return 0;
        
        
}
