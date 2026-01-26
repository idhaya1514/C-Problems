#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   if(n%3==0 && n%7==0)
   {
       printf("%d is divible by 3 and 7",n);
   }
   else
   {
       printf("%d is not divisible by 3 and 7",n);
   }
    return 0;
}