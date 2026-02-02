#include <stdio.h>
int main() {
    int n;
    int hour;
    int total=0;
    int count=0;
    printf("Enter the Integers");
    scanf("%d",&n);


    int i=0;
    while (i<n) {
        printf("Enter the hours");
        scanf("%d",&hour);
        total=total+hour;
            if (hour>4) {
                count++;
            }
        i++;
    }
    printf("Total Overtime %d\n",total);
    printf("Burnout Days:%d",count);
}