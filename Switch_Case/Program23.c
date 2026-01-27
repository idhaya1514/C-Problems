#include <stdio.h>

int main() {
        int rule;
        int amount;
        scanf("%d",&rule);
        scanf("%d",&amount);
        
        switch(rule)
        {
            case 1:
                    int amt1= amount -((amount*5)/100);
                    printf("%d",amt1);
                    break;
            case 2:
                 int amt2= amount -((amount*15)/100);
                        printf("%d",amt2);
                        break;
            default:
                printf("Invalid Input");
        } return 0;
        
        
}
