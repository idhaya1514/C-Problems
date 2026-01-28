#include <stdio.h>
int main() {
    int n1;
    int n2;
    int gcd;
    scanf("%d", &n1);
    scanf("%d", &n2);
    for (int i = 1; i <=n1 && i<=n2; i++) {
        if (n1%i == 0 && n2%i == 0) {
            gcd = i;
        }
    }
    printf("%d\n",gcd);
    return 0;
}