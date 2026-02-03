#include <stdio.h>

int main() {
    int N;
    printf("Enter number of transactions: ");
    scanf("%d", &N);

    int i = 0;
    int transaction;
    int highValueCount = 0;
    int streak = 0;
    int fraudAttempt = -1;

    while (i < N) {
        printf("Enter transaction %d: ", i + 1);
        scanf("%d", &transaction);

        if (transaction >= 50000) {
            highValueCount++;
            streak++;

            if (streak == 3 && fraudAttempt == -1) {
                fraudAttempt = i + 1;  // 1-based attempt where fraud triggers
            }
        } else {
            streak = 0;  // reset streak if transaction < 50000
        }

        i++;
    }

    if (fraudAttempt != -1) {
        printf("Fraud Triggered At Attempt: %d\n", fraudAttempt);
    } else {
        printf("Fraud Triggered At Attempt: Not Triggered\n");
    }

    printf("High-Value Transactions: %d\n", highValueCount);

    return 0;
}
