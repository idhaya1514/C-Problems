#include <stdio.h>
int main() {
    int m;
    int n;
    int sum=0;
    int mul ;
    scanf("%d",&m);
    scanf("%d",&n);
    for ( int i =1;i<=m;i++) {
         mul=m*i;
        sum=sum+mul;
    }
    printf("%d\n",sum);
    return 0;
}