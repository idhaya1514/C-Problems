#include <stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    
    if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z'))
   {
       printf("Alphabets");
   }
   else if(ch>='0'&& ch<='9')
   {
       printf("Digits");
   }
   else
   {
       printf("Special Characters");
   }
    return 0;
}