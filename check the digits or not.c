#include <stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='0' && ch<='9')
    {
        printf("%c is a Digits",ch);
    }
    else
    {
        printf("%c is a not a digit",ch);
    }
    return 0;
}