#include <stdio.h>
int main()
{
    int n,value;
    int streak=0;
    int max=0;
    printf("Enter the Integer");
    scanf("%d",&n);

    int i=0;
   

    while(i<n)
    {
        printf("Enter the value");
        scanf("%d",&value);

        if(value==0)
        {
            streak++;
            
            if(streak>max)
            {
                max=streak;
            }
        }
        else
        streak=0;
        
        
        i++;
    }printf("%d\n",max);
  
}