#include <stdio.h>
#include <math.h>
int main() {
    int n1;
    int sum=0;
    int temp;
    int rem;
    scanf("%d",&n1);
    temp=n1;
    for (;temp!=0; temp=temp/10) {
        rem=temp%10;
        sum=sum+rem*rem*rem;
    }
    if (sum==n1) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }

        return 0;
}