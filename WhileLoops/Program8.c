#include <stdio.h>
int main()
{
    int n,value;
    int count=0;
    int max=0;
    
    
    printf("Enter the Integer");
    scanf("%d",&n);
    
    int i=0;
    
    while(i<n)
    {
        printf("Enter the Value");
        scanf("%d",&value);
        
        if(value==0)
        {
           count++;
           if(count>max)
           {
               max=count;
           }
        }
        
        else{
            count=0;
        }
        i++;
    }
    printf("%d",max);
}