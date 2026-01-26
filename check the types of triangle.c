
#include <stdio.h>

int main()
{
    int a,b,c;
   
   scanf("%d %d %d",&a,&b,&c);
   
    if(a==b==c==a)
    {
        printf("It is an Equivalent Triangle");
    }
    else if(a==b!=c==a)
    {
        printf("It is an Isoceles triangle");
    }
    else
    {
        printf("It is a Scalene triangle");
    }
   
    return 0;
    
}