#include <stdio.h>

int main()
{
    int n;
   
   scanf("%d",&n);
   
    if(n%11==0)
    {
        printf("%d is divisible by 11",n);
    }
    else
    {
        printf("%d is not divisible by 11",n);
    }
   
    return 0;
    
}