#include <stdio.h>
int main() {
    int datapack;
    int n;
    int rem;
    int data=0;
    int total=0;
    int count=0;
    
    printf("Enter the Datapack");
    scanf("%d",&datapack);

    printf("Enter the Integers");
    scanf("%d",&n);

    int i=0;

    while(i<n) {
        int dailydata;
        printf("Enter the Dailydata");
        scanf("%d",&dailydata);
        int total= total+dailydata;
        if (datapack==0)
            count=0;
        else if (datapack>0)
        {
            rem=datapack-dailydata;
            data++;
        }
        else
        {
            count++;
        }
        datapack=rem;
        i++;
    }
    if (total<datapack)
        printf("Exhausted day :Not Exhausted ");
    else{
        printf("Exhausted Day :%d \n",data);
}
    printf("Overused Data :%d",count);

    return 0;
}