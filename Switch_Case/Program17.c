#include <stdio.h>

int main() {
    int v_type;
    int hour;
    
    scanf("%d",&v_type);
    scanf(" %d",&hour);

    switch(v_type) {
        case 1:
           
                int amt=hour*10;
                printf("%d",amt);
               break;
            
        case 2:
           
                int amt1= hour*20;
                printf("%d",amt1);
               break;
        default:
        
            printf("Invalid Input");
            break;
    }

    return 0;
}
