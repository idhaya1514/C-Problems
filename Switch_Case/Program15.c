#include <stdio.h>

int main() {
    int rules;
    char type;
    
    scanf("%d",&rules);
    scanf(" %c",&type);

    switch(rules) {
        case 1:
            if (type == 'R' || type =='r')
            {
                 int amt=5000;
                printf("%d",amt);
            }
             else if (type == 'S' || type == 's')
            {
                 int amt=3000;
                printf("%d",amt);
            } break;
            
        case 2:
            if(type == 'R' || type =='r')
            {
                int amt=9000;
                printf("%d",amt);
            }
            else if(type == 'S' || type == 's')
            {
                int amt=7000;
                printf("%d",amt);
            } break;
        default:
        
            printf("Invalid Input");
            break;
    }

    return 0;
}
