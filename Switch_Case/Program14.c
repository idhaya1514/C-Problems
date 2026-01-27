#include <stdio.h>

int main() {
    int rules;
    int age;
    
    scanf("%d",&rules);
    scanf(" %d",&age);

    switch(rules) {
        case 1:
            if (age>5)
            {
                 int amt=2500;
                printf("%d",amt);
            }
             else if (age<=5)
            {
                 int amt=1500;
                printf("%d",amt);
            } break;
            
        case 2:
            if(age>5)
            {
                int amt=6000;
                printf("%d",amt);
            }
            else if(age<=5)
            {
                int amt=4000;
                printf("%d",amt);
            } break;
        default:
        
            printf("Invalid Input");
            break;
    }

    return 0;
}
