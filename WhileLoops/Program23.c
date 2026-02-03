#include <stdio.h>
int main() {
    int n;
    int value;
    int count=0;
    int max=0;
    int streak=0;
    int val=0;
    int fstreak=-1;

    printf("Enter the Integer");
    scanf("%d",&n);


    int i=0;

    while (i<n) {
        printf("Enter the values");
        scanf("%d",&value);

        if (value>70) {
            count++;
            streak++;

            if (streak==3 && fstreak==-1){
                fstreak=i+1;
            }
        }
        else {
            streak=0;
        }
        i++;
    }
    if (fstreak!=-1) {
        printf("Breakdown At Reading :%d\n",fstreak);
    }
    else {
        printf("Breakdown At Reading: Not Occurred\n");
    }
    printf("Unsafe Reading :%d\n",count);
    return 0;
}