#include <stdio.h>

int main() {
        int type;
        int dis;
        scanf("%d",&type);
        scanf("%d",&dis);
        switch(type)
        {
            case 1:
                int amt1=dis*10;
                printf("%d",amt1);
                break;
            case 2 :
                int amt2=dis*15;
                printf("%d",amt2);
                break;
            case 3:
                int amt3=dis*20;
                printf("%d",amt3);
                break;
            
               
        } return 0;
        
        
}
