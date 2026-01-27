#include <stdio.h>

int main() {
        int rule;
        int unit;
        scanf("%d",&rule);
        scanf("%d",&unit);
        
        switch(rule)
        {
            case 1:
                if(unit>=0 && unit<=30){
                    int amt1=unit*5;
                    printf("%d",amt1);
                }
                else if(unit>30)
                {
                    int amt2=unit*8;
                    printf("%d",amt2);
                }
                else 
                {
                    printf("Invalid Inputs");
                } break;
            case 2:
                if(unit>0 && unit<=unit)
                    {
                        int amt3=unit*10;
                        printf("%d",amt3);
                    }
                break;
            default:
                printf("Invalid Input");
        } return 0;
        
        
}
