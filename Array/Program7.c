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
    int x;
    scanf("%d",&x);
    for(int i=0;i<size;i++)
    {
        if(x==arr[i])
        {
            count++;
        }
    }
    printf("%d",count);
}