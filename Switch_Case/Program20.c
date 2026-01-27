#include <stdio.h>

int main() {
        int role;
        int hour;
        scanf("%d",&role);
        scanf("%d",&hour);
        
        switch(role)
        {
            case 1:
                printf("Full access anytime");
                break;
            case 2:
                if(hour>=9 || hour<=18)
                    {
                        printf("Limited Access");
                    }
                else{
                        printf("Access Denied");
                }break;
            default:
                printf("Invalid Input");
        }
        
return 0;
}

