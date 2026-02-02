#include <stdio.h>
int main() {
    int wallet;
    int n;
    int amount;
    int count =0;
    int rem;

    printf("Enter the Wallet Balance:");
    scanf("%d",&wallet);

    printf("Enter the Integers");
    scanf("%d",&n);

    int i=0;

    while (i<n) {
        printf("Enter the amount");
        scanf("%d",&amount);
        rem=wallet-amount;
        if (wallet<amount) {
            rem=wallet;
            break;
        }

        if (amount<wallet)
        {
            count++;
        }

        i++;
        wallet=rem;
    }
    printf("%d\n",count);
    printf("%d",rem);
}
