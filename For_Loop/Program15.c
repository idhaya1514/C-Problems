#include <stdio.h>
int main() {
    int n;
    int count=0;
    int sum =0;
    scanf("%d",&n);
    for (int i=2;i<=n;i++) {
        count=0;
        for (int j=2;j<i;j++)
            {
            if (i%j==0)
            {
                count++;
            }

        }
        if (count==0) {
             sum=sum+1;
        }

    }printf("%d\n",sum);
    return 0;
}