#include <stdio.h>
int main(){
    int size;
    int count=0;
    scanf("%d",&size);
    int arr[size];
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==1)
        {
            count++;
        }
    }
    printf("Number of Present Students = %d",count);
    return 0;
}

