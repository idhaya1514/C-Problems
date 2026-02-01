#include <stdio.h>

int main(){
    int data;
    int n;
    int hour;
    int rem;
    int count=0;
    int max;
    int a;
    printf("Enter the Data");
    scanf("%d",&data);

    printf("Enter the Number");
    scanf("%d",&n);

    int i=0;
    while(i<n) {
        printf("Enter the Integers");
        scanf("%d",&hour);

        int rem=data-hour;
        count++;
        if (rem<0)
            a=count;



        data=rem;

        i++;
    }
    printf("%d\n",count);

    return 0;
}
