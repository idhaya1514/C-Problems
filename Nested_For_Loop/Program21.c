#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int size=(2*n)-1;
    for (int i=0;i<size;i++)
        {
        for (int j=0;j<size;j++) {
            if (i==0||j==0||i==size-1||j==size-1) {
                printf("%d",n);
            }
            else if (i==1||j==1||j==size-2||i==size-2) {
                printf("%d",n-1);
            }
            else if (i==2||j==2||i==size-3||j==size-3) {
                printf("%d",n-2);
            }
            else {
                printf("%d",n-3);
            }
        }
        printf("\n");
        }
    return 0;
}