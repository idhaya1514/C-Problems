#include <stdio.h>

int main() {
        int dis;
        scanf("%d",&dis);
        switch(dis)
        {
              case 0: case 1: case 3: case 4: case 5:
                printf("Transport Fee-800");
                break;
            case 6: case 7: case 8: case 9: case 10: 
                printf("Transport Fee-1200");
                break;
            default:
            if(dis>10 && dis<=dis)
            {
                printf("Transport Fee-1800");
            }
            else{
                printf("Invalid Inputs");
              } 
         }return 0;
        
        
}
