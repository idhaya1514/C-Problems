#include <stdio.h>

int main()
{
    int acc_type;
    int balance;
    int withdraw;
    scanf("%d",&acc_type);
    scanf("%d",&balance);
    scanf("%d",&withdraw);
    
    switch(acc_type)
    {
        case 1:
        if(balance>=withdraw)
        {
            printf("Trancsation Successfully");
        }
        else{
            printf("Insufficient Amount");
        }
        break;
        case 2:
            if(withdraw<balance && withdraw<=5000)
            {
                printf("Transcation Successfully");
            }
            else if(withdraw>5000)
            {
                printf("Limit Exceed");
            }break;
    }
    return 0;
}