#include <stdio.h>

int main() {
        int type;
        int lit;
        scanf("%d",&type);
        scanf("%d",&lit);
        switch(type)
        {
             case 1:
                int amt1=lit*105;
                printf("Fuel Cost - %d",amt1);
                break;
            case 2 : 
            int amt2=lit*92;
                printf("Fuel Cost - %d",amt2);
                break;
                
            case 3:
                int amt3= lit*85;
                printf("Fuel Cost - %d",amt3);
                 break;
            default:
                printf("Invalid Inputs");
              } return 0;
        
        
}
