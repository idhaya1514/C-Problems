#include <stdio.h>
int main() {
    int n;
    int values[100];
    int totaldrop=0;
    int consecutive=0;
    int crash=-1;

    printf("Enter the Integer");
    scanf("%d",&n);

    printf("Enter the values");
    scanf("%d",&values[0]);

    int i=1;
    while (i<n) {
        printf("Enter a values");
        scanf("%d",&values[i]);

        if (values[i] < values[i-1]) {
            totaldrop++;
            consecutive++;

            if (consecutive==3 && crash==-1){
                crash=i+1;
            }
        } else {
            consecutive=0;
        }
        i++;
    }
    if (crash==-1) {
        printf("Crash Day :0");
    }
    else {
        printf("Crash Day : %d\n",crash);
    }
    printf("Total Drops :%d\n",totaldrop);

    return 0;
}