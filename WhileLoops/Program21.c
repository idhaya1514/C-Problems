#include <stdio.h>
int main() {
    int n;
    int min;
    int count =0;
    int max=0;
    int streak=0;

    printf("Enter the Integer");
    scanf("%d",&n);

    int i=0;

    while (i<n) {
        printf("Enter the min");
        scanf("%d",&min);

        if (min>20) {
            count++;
            streak++;

            if (streak>max) {
                max=streak;
            }
        }
        else {
            streak=0;
        }
        i++;
    }
    printf("Congestion Minutes :%d\n",count);
    printf("Longest Congestion Streak :%d\n",max);

    return 0;
}

