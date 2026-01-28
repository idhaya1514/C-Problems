#include <stdio.h>
#include <math.h>
int main() {
    int n1;
    int p=0;

    scanf("%d",&n1);
    for (int i=2;i <= n1 / 2;i++) {
        if (n1%i == 0) {
            p=1;
            break;
        }
    }
    if (p==0) {
        printf("Prime\n");
    }
    else if (n1<=0){
        printf("Not Prime\n");
    }
    else {
        printf("Not Prime\n");
    }
        return 0;
}