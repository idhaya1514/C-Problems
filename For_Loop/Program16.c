#include <stdio.h>
int main() {
    int n;
    int sum = 0;
    scanf("%d",&n);
    for (int i=1;i<n;i++) {
        if (n%i==0) {
            sum=sum+i;
    }
    }
    if (sum==n) {
        printf("Yes\n");
    }
    else
        printf("No\n");
    return 0;
}