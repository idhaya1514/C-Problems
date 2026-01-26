#include <stdio.h>

int main()
{
    int n1, n2,res;
    scanf("%d %d",&n1,&n2);
    res=(n1<n2)?n1:n2;
    printf("%d is a smallest",res);
    return 0;
}