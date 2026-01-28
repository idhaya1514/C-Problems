#include <stdio.h>
int main() {
    int n;
    int p;
    int power=1;
    scanf("%d",&n);
    scanf("%d",&p);
    for ( int i =1;i<=p;i++) {
         power= power*n;
    }
    printf("%d\n",power);
    return 0;
}