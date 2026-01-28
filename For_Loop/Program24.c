#include <stdio.h>
#include <math.h>
int main() {
    int n1;
    int sum=0;
    int temp;
    int temp1;
    scanf("%d",&n1);
    temp1=n1;
    for (int i=1;n1!=0;) {
       temp=n1%10;
        sum=sum*10+temp;
        n1=n1/10;
    }
    if (temp1==sum) {
        printf("Palindrome\n");
    }
    else {
        printf("Not Palindrome\n");
    }

        return 0;
}