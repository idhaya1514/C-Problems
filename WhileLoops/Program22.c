#include <stdio.h>
int main() {
    int n;
    int value;
    int count=0;
    int consective=0;
    int max=0;
    int streak=-1;

    printf("Enter the Integer");
    scanf("%d",&n);


    int i=0;

    while (i<n) {
        printf("Enter the values");
        scanf("%d",&value);

            if (value==0) {
                count++;
                consective++;

                if (consective>max ) {
                    max=consective;
                }
                if (max>=3 &&streak==-1) {
                    streak=i+1;
                }
            }
        else {
            consective=0;
        }
        i++;
    }
    if (max<3) {
        printf("Lock Triggered Attempts :Not Locked\n");
    } else {
        printf("Lock Triggered Attempts %d\n",streak);
    }
    printf("Total Failure Attempts :%d\n",count);
}