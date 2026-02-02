#include <stdio.h>
int main(){
    int fuel;
    int n;
    int trip;
    int rem;
    int count=0;

    printf("Enter the Fuels ");
    scanf("%d",&fuel);

    printf("Enter the Integers");
    scanf("%d",&n);

    int i=0;

    while(i<n)
    {
        printf("Enter the trips");
        scanf("%d",&trip);

        rem = fuel-trip;
        if (fuel<trip) {
            break;
        }
        if (rem>0) {
            count++;
        }
        fuel=rem;

        i++;
    }
    printf(" Completed Trips%d\n",count);
    printf(" Remaining Fuel%d",fuel);
}