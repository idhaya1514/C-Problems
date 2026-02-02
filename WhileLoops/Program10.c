#include<stdio.h>
int main(){
    int n;
    int hour;
    int count=0;
    printf("Enter the Integer");
    scanf("%d",&n);

    int i=0;

    while(i<n)
    {
        printf("Enter the hours");
        scanf("%d",&hour);

        if(hour==0)
        {
            count++;
        }i++;
    }
    printf("Inactive Weeks:%d\n",count);
    if(count>0)
        printf("Risk Status:High\n");

    else
        printf("Risk Status:Low\n");

    return 0;

}