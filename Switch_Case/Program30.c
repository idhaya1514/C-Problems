#include <stdio.h>

int main() {
        int hours;
        scanf("%d",&hours);
        switch(hours)
        {
            case 0: case 1:
                printf("Short Interruption");
                break;
            case 2 : case 3: case 4:
                printf("Medium Interruption");
                break;
            default:
               if(hours>4 && hours<=24)
               {
                   printf("Long Interruption");
               }
               else{
                   printf("Invalid Inputs");
               }
            
               
        } return 0;
        
        
}
