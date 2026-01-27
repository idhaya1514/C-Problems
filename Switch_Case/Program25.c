#include <stdio.h>

int main() {
        int type;
        scanf("%d",&type);
        switch(type)
        {
            case 1:
                    int amt1=1200;
                    printf("%d",amt1);
                    break;
            case 2:
                 int amt2=800;
                        printf("%d",amt2);
                        break;
            case 3 :
                int amt3=500;
                printf("%d",amt3);
                break;
            default:
                printf("Invalid Input");
        } return 0;
        
        
}
