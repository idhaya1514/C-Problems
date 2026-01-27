#include <stdio.h>

int main()
{
    int mark;
    scanf("%d",&mark);
    switch(mark/10)
    
    {
        case 9:case 10:
            printf("Grade A");
            break;
        case 8:
            printf("Grade B");
            break;
        case 7:
            printf("Grade C");
            break;
        case 6:
            printf("Grade D");
            break;
        case 5:
            printf("Grade E");
            break;
        case 4:
            printf("Grade F");
        case 3:
            if(mark<40 && mark>=35)
            {
                printf("Supplementary");
            }
            else{
                printf("Fail");
            }break;
    
        default:
            printf("Fail");
}
    return 0;
}