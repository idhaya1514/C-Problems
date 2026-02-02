
#include <stdio.h>

int main(){
    int n;
    int hour;
    int total=0;
    int count=0;
 

    printf("Enter the Integers");
    scanf("%d",&n);

    int i=0;
    while(i<n) {
        printf("Enter the Hours");
        scanf("%d",&hour);

        total=total+hour;

        if (hour>2) {
            count++;
        }
        i++;
    }
    printf("%d\n",total);
    printf("%d",count);
    return 0;
}
