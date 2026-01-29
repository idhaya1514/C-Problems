#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        for (int k=1;k<=n-i;k++) {
            printf(" ");
        }
        for (int j=1;j<=i;j++) {
            printf("%c",j+64);
        }
        for (int r=i-1;r>0;r--){
            printf("%c",r+64);
        }
        printf("\n");
    }
    return 0;
}