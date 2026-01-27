#include <stdio.h>

int main() {
    int type;
    int trip;
    
    scanf("%d",&type);
    scanf(" %d",&trip);

    switch(type) {
        case 1:
            if (trip==1) {
                printf("100");
            }
             else if (trip>1 && trip<=10)
            {
                printf("800");
            } 
         
            else if (trip>10){
                printf("800");
            }
            break;
        case 2:
             int total=trip*240;
            printf("%d",total);
            break;
        default:
        
            printf("Invalid Input");
            break;
    }

    return 0;
}
