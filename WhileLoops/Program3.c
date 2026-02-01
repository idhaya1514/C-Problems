#include <stdio.h>
int main()
{
    int totaldata;
    int days;
    int dataused;
    int rem;
    int count=0;

    printf("Enter the totaldata");
    scanf("%d",&totaldata);

    printf("Enter the days");
    scanf("%d",&days);

    int i=0;
   

    while(i<days)
    {
        printf("Enter the dataused");
        scanf("%d",&dataused);

        totaldata=totaldata-dataused;
            count++;
        if(totaldata<=0)
        {
            totaldata=0;
            break;
        }

        i++;
    }printf("%d\n",count);
    printf("%d\n",totaldata);
}