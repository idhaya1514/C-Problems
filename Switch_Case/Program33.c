#include <stdio.h>

int main() {
        int book;
        int days;
        scanf("%d",&book);
        scanf("%d",&days);
        switch(book)
        {
             case 1:
                int amt1=days*2;
                printf("%d",amt1);
                break;
            case 2 : 
                int amt2= days*5;
                printf("%d",amt2);
                break;
            default:
                printf("Invalid Inputs");
              
            
               
        } return 0;
        
        
}
