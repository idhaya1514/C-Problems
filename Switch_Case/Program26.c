#include <stdio.h>

int main() {
        int days;
        scanf("%d",&days);
        switch(days)
        {
            
            case 1: case 2: case 3: case 4: case 5:
                    int amt1=days*50;
                    printf("%d",amt1);
                    break;
            case 6: case 7: case 8 : case 9: case 10:
                 int amt2=days*100;
                        printf("%d",amt2);
                        break;
            default:
                if(days>10)
                {
                int amt=days*200;
                printf("%d",amt);
                 }
                 else{
                      printf("Invalid Input");
                 }
               
        } return 0;
        
        
}
