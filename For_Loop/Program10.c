#include <stdio.h>
int main() {
    int n;
    int a1=0,a2=1,a3;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        if (i<=1) {
            a3=i;
        }
        else {
            a3=a1+a2;
            a1=a2;
            a2=a3;
        }
        printf("%d",a3);
    }

        return 0;
    }

