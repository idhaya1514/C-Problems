#include<stdio.h>
int main() {
    int maxweight;
    int n;
    int weight;
    int total=0;
    int count=0;
    int rem;
    int rem1;

    printf("Enter the Maximum Weight");
    scanf("%d",&maxweight);

    printf("Enter the Integers");
    scanf("%d",&n);
    int temp=maxweight;
    int i=0;

    while (i<n) {
        printf("Enter the weight");
        scanf("%d",&weight);
        rem1=total+weight;
        total=rem1;
        if (maxweight>weight) {
            rem=maxweight-weight;
            count++;
        }
        maxweight=rem;
        i++;
    }

    printf("People Entered:%d\n",count);
    if (total>temp) {
        printf("Overload Status: Yes\n");
    }
    else if (temp>total) {
        printf("Overload Status : No\n");
    }
    return 0;
}