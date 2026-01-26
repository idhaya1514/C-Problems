#include <stdio.h>

int main()
{
    int s1,s2,s3;
   
   scanf("%d %d %d",&s1,&s2,&s3);
   
    if(s1+s2+s3==180)
    {
        printf("It is a valid Triangle");
    }
    else
    {
        printf("It is not a valid triangle");
    }
   
    return 0;
    
}