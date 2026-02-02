#include <stdio.h>
int main() {
    int capacity;
    int n;
    int load;
    int Safe =0;
    int Fail =0;

    printf("Enter the Capacity");
    scanf("%d",&capacity);

    printf("Enter the Integers");
    scanf("%d",&n);

    int i=0;
    while(i<n) {
        printf("Enter the load");
        scanf("%d",&load);

        if (capacity>load) {
            Safe++;
        }
        else {
            Fail++;
        }
        i++;
    }printf("Safe Hours :%d\n",Safe);
    printf("Failure Count :%d\n",Fail);
    return 0;
}