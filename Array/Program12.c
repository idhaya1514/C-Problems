#include<stdio.h>
int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    int count=0;
    int sum=0;
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            count++;
        }
        else
        {
            sum++;
        }
    }
    printf("Even=%d\n",count);
    printf("Odd=%d\n",sum);

    return 0;
}