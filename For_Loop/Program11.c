#include <stdio.h>
int main() {
    int n;
    int sum=0;
    int digit;
    scanf("%d",&n);
    for (;n>0;)
        {
        digit = n%10;
        sum += digit;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}