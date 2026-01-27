#include <stdio.h>

int main() {
        int type;
        int min;
        scanf("%d",&type);
        scanf("%d",&min);
        
        switch(type)
        {
            case 1:
                    int amt1= min*1;
                    printf("%d",amt1);
                    break;
            case 2:
                 int amt2= min*3;
                        printf("%d",amt2);
                        break;
            case 3 :
                int amt3=min*10;
                printf("%d",amt3);
                break;
            default:
                printf("Invalid Input");
        } return 0;
        
        
}
