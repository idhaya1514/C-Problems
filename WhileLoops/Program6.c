#include<stdio.h>
int main(){
    int capacity;
    int n;
    int hour;
    int total=0;
    int bed;
    int count=0;
    
    printf("Enter the capacity");
    scanf("%d",&capacity);
    
    printf("Enter the Integers");
    scanf("%d",&n);
    
    double threshold=0.9*capacity;
    
    int i=0;
    
    while(i<n)
    {
        printf("Enter the hour ");
        scanf("%d",&hour);
        
        bed=total+hour;
        
        if(bed>=threshold)
        {
            count++;
        }
        total=bed;
        i++;
    } printf("%d\n",total);
    printf("%d\n",count);
    
    return 0;
}