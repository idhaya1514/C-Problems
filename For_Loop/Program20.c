#include <stdio.h>
int main() {
    int n1;
    int sq =1;
    int c=0;
    scanf("%d", &n1);

    for (int i = 1; i <= n1; i++) {
        sq=i*i;
         c= c+sq;

    }printf("%d", c);
    return 0;
}