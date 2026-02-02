#include <stdio.h>

int main(){
    int n;
    int hour;
    int count=0;
    int threshold=5;
    int max;
    printf("Enter the Integers");
    scanf("%d",&n);

    int i=0;
    while(i<n) {
        printf("Enter the Hours");
        scanf("%d",&hour);

       if (hour>max) {
           max=hour;
       }

        if (hour>threshold) {
            count++;
        }
        i++;
    }
    printf(" Surge Hours%d\n",count);
    printf(" Max Usage%d",max);
    return 0;
}
