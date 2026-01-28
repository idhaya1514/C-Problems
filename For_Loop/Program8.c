#include <stdio.h>
int main() {
    int n;
    int temp=0;
    scanf("%d",&n);
    for(int i=n;n>=1;i--) {
         {
           temp=n%10;
             printf("%d",temp);
             n=n/10;
             if (n==0) {
                 break;
             }
        }
    }
    return 0;
}