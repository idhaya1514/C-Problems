#include <stdio.h>

int main()
{
    int num;
   
   scanf("%d",&num);
   
    if(num>=10 && num<=20)
    {
        printf("%d is within a range",num);
    }
    else 
    {
        printf("%d is not within a range",num);
    }
    return 0;
}