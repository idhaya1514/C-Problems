#include <stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   if(n>=18)
   {
       printf("%d is eligible by voting",n);
   }
   else
   {
       printf("%d is not eligible by voting",n);
   }
    return 0;
}