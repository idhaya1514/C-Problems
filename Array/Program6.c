#include <stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    int max=arr[0];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>=max)
        {
            max=arr[i];
            arr[i]=0;
        }
    }
    int max1=arr[0];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>max1)
        {
            max1=arr[i];
        }
    }
    printf("Second Highest Salary = %d",max1);
    return 0;
    
}