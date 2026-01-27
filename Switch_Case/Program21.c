#include <stdio.h>

int main() {
        int type;
        int time;
        scanf("%d",&type);
        scanf("%d",&time);
        
        switch(type)
        {
            case 1:
                if(time>=18 && time<=24){
                    int price=150+50;
                    printf("%d",price);
                }
                else if(time<18)
                {
                    int price1=150;
                    printf("%d",price1);
                }
                else 
                {
                    printf("Invalid Inputs");
                } break;
            case 2:
                if(time>=0 && time<=24)
                    {
                        int price2=250;
                        printf("%d",price2);
                    }
                break;
            default:
                printf("Invalid Input");
        } return 0;
        
        
}
