#include <stdio.h>
int main(){
    int size;
    int count=0;
    scanf("%d",&size);
    int arr[size];
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>100)
        {
            count++;
        }
    }
    printf("Houses with consumption above 100 units = %d",count);
    
    return 0;
}