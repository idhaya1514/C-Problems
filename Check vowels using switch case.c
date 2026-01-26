#include <stdio.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='a' && ch<='z'|| ch>='A'&& ch<='Z')
    {
        switch(ch)
            {
                case 'a':case 'e':case'i':case'o':case 'u':case'A':case'E':case'I':
                case 'O':case 'U':        
                printf("VOWELS");
                break;
                default:
                printf("consonants");
            }
    }
    else
    {
        printf("Invalid character");
    }
    
    return 0;
}