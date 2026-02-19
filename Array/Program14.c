#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int temp[size];
    int j=0;
    
    int max=arr[size-1];
    temp[j++]=max;
    
    for(int i=size-2;i>0;i--)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            temp[j++]=max;
        }
    }
    
    for(int i=j-1;i>=0;i--)
    {
        printf("%d ",temp[i]);
    }
    return 0;
}