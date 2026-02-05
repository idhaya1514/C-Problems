#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int sum=0;
    int sum1=0;
    int val;
    
    int arr[size];

    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    for(int j=0;j<size-1;j++)
    {
        scanf("%d",&arr[j]);
        sum1=sum1+arr[j];
       
    }
    
     val=sum-sum1;
    printf("%d",val);
    
    return 0;
}