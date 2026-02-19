#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    int sum=0;
    int avg;
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        avg=sum+arr[i];
        sum=avg;
    }
    int cal= avg/size;
    int count=0;
   for(int i=0;i<size;i++)
   {
       if(arr[i]>cal)
       {
           count++;
       }
   }
   printf("%d",count);
}