#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   if(n>=100 && n<=999)
   {
       printf("%d is three digit number",n);
   }
   else
   {
       printf("%d is not three digits number",n);
   }
    return 0;
}