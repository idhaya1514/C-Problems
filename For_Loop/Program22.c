#include <stdio.h>
#include <math.h>
int main() {
    int n1;
    int sum=0;
    int count=0;

    scanf("%d",&n1);
    for (int i=2;i<n1;i++) {
        count=0;
        for (int j=2;j<i;j++) {
            if (i%j==0) {
                count++;
            }
        }
        if (count==0) {
            sum=sum+1;
        }
    }
        printf("%d\n",sum);
    return 0;
}