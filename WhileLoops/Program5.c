#include <stdio.h>
int main()
{
    int n,value;
    int s=0;
    int f=0;
    printf("Enter the Integer");
    scanf("%d",&n);

    int i=0;


    while(i<n)
    {
        printf("Enter the value");
        scanf("%d",&value);

        if(value==0)
        {
            f=f+1;
        }
        else
        s=s+1;
        
        
        i++;
    }
        printf("Successful%d\n",s);
        printf("Failure%d\n",f);
        if(s>=f)
        {
            printf(" status:safe");
        }
    else{
        printf(" status:risk");
    }
}