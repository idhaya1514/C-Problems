#include <stdio.h>
#include <math.h>
int main() {
    int n1;
    int sum=0;
    int rem;
    scanf("%d", &n1);

    for (int i = 0;n1 !=0;i++) {
       rem=n1%10;
        sum=sum+rem* pow(2,i);
        n1=n1/10;

    }printf("%d", sum);
    return 0;
}