#include <stdio.h>
int main() {
    int n;
    int count=0;
    scanf("%d",&n);
    for (;n>0;) {
        int div=n%10;
        if (div%2==0) {
            count++;
        }
        n=n/10;
    } printf("%d",count);
    return 0;
}