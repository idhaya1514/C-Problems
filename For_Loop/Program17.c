#include <stdio.h>
int main() {
    int n;
    int digit;
    int sum = 0;
    int fact=1;
    scanf("%d",&n);
    int temp =n;
    for (;n>0;) {
        digit=n%10;
        fact=1;
        for (int j=1;j<=digit;j++) {
            fact=fact*j;
        }
        sum=sum+fact;
        n=n/10;
    }if (temp==sum)
        printf("YES");
    else
        printf("NO");
    return 0;
}