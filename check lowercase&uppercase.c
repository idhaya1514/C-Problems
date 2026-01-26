#include <stdio.h>

int main()
{
    char ch;
   
   scanf("%c",&ch);
   
    if(ch>='a' && ch<='z')
    {
        printf("lowercase");
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("Uppercase");
    }
    else
    {
        printf("Not a character");
    }
    return 0;
    
}