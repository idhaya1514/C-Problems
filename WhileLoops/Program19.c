#include<stdio.h>
int main() {
    int maxcapacity;
    int n;
    int number;
    int rem;
    int total=0;
    int rej=0;
    int tre=0;

    printf("Enter the maxcapacity");
    scanf("%d",&maxcapacity);

    printf("Enter the Integer");
    scanf("%d",&n);

    int i=0;
    while (i<n) {
        printf("Enter the number");
        scanf("%d",&number);
         rem=total+number;
        total=rem;
        i++;
    }
    rej=total-maxcapacity;
    tre=total-rej;

    printf("\nThe Treated Patients %d",tre);
    if (rej<0) {
        printf("The Rejected Patients:0");
    }
    else {
        printf("\nThe Rejected Patients %d",rej);
    }




}