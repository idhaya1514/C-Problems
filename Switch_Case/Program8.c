#include <stdio.h>

int main()
{
    int add;
    int mark;
    scanf("%d",&add);
    scanf("%d",&mark);
    if(add<75)
    {
        printf("Fail");
    }
    else
    {
        if(mark>75)
        {
            printf("Distiction");
        }
        else if(mark>54 && mark<=74)
        {
            printf("Pass");
        }
        else if(mark<54){
            printf("Fail") ;           
        }
    }
    
    return 0;
}
