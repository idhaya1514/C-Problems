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
    int val=arr[0];
    printf("%d",val);
    for(int i=1;i<size;i++){
        if(arr[i-2]!=arr[i])
        if(arr[i-1]!=arr[i])
        if(arr[0]!=arr[i])
        {
         printf("%d",arr[i]);
        }
    }
    return 0;
}