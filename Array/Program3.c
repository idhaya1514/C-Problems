#include <stdio.h>
int main(){
    int size;
    int avg=0;
    int total;
    int count =0;
    scanf("%d",&size);
    int arr[size];
    
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        total=avg+arr[i];
        avg=total;
        
    
    }
     avg=total/size;
     for(int i=0;i<size;i++)
     {
         if(arr[i]>avg)
         {
             count++;
         }
     }
     printf("Day with above average sales =%d",count);
    
    
    return 0;
}