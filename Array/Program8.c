#include<stdio.h>
int main()
{
    int size;
    int count=0;
    scanf("%d",&size);
    int arr[size];
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(int i=0;i<size;i++)
    {

        if(min<arr[i])
        {
           
            count++;
            min=arr[i];
        }
        else
        {
            count=0;
        }
        
    }
    if(count==size-1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}