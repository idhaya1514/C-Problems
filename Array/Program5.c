#include <stdio.h>
int main(){
    int size;
    int sum=0;
    scanf("%d",&size);
    int arr[size];
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
        
    }
    printf("Total Votes : %d\n",sum);
    
    int max=arr[0];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("Highest Votes : %d",max);
    return 0;
}