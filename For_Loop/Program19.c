#include <stdio.h>
int main() {
    int n1;
    int n2;
    int max;
    int lcm;
    scanf("%d", &n1);
    scanf("%d", &n2);
    max =(n1>n2) ? n1 : n2;
    for ( int i=max;;i++) {
        if (i%n1== 0 && i%n2==0) {
            lcm = i;
            break;
        }
    }
    printf("%d\n", lcm);
    return 0;
}