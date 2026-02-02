#include <stdio.h>
int main() {
    int cash;
    int n;
    int amount;
    int count=0;
    int rem;
    int total=0;

    printf("Enter the ATMCash");
    scanf("%d",&cash);

    printf("Enter the Integers");
    scanf("%d",&n);

    int i=0;

    while (i<n) {
        printf("Enter the Amounts");
        scanf("%d",&amount);

        if (cash>amount && cash>total)
            {
            count++;
            rem=cash-amount;

            }
        else if(cash<amount)
        {
            total=cash;
        }

            cash=rem;
            i++;
    }
    printf("%d\n",count);
    printf("%d\n",total);
    return 0;
}