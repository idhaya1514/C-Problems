#include <stdio.h>

int main()
{
    int Plan;
    int Option;
    scanf("%d",&Plan);
    scanf("%d",&Option);
    
    switch(Plan)
    {
        case 1:
        if(Option==1){
            int amount =199;
            int total= amount-20;
            printf("%d",total);
            break;
        }
        else if(Option==2)
        {
            int amount =199;
            printf("%d",amount);
            break;
        }
        
        else{
            printf("Invalid option");
        break;}
        case 2:
        if(Option==1){
            int amount =399;
            int total= amount-20;
            printf("%d",total);
            break;
        }
        else if(Option==2){
            int amount=399;
            printf("%d",amount);
            break;
        }
            
        else
        {
            printf("Invalid option");
    
        break;
        }
}

    return 0;
}
