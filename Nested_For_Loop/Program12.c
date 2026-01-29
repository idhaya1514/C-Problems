#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        for (int l=1;l<=i;l++) {
            printf("%d",l);
        }for (int k=1; k<=(2*n)-(2*i);k++) {
            printf(" ");
        }
            for (int j=i;j>0;j--) {
               printf("%d",j);
            }
        printf("\n");
    }
    return 0;
}