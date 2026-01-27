#include <stdio.h>

int main() {
    int code;
    int year;

    scanf("%d", &code);
    scanf(" %d", &year);

    switch(code) {
        case 1:
            if (year>=3)
            {
                int amount=50000+(year*5000);
                printf("%d",amount);
            } 
            else if (year<3) {
                printf("50000");
            }
            break;
        case 2:
            if (year>=3) {
                int amount =35000+(year*5000);
                printf("%d",amount);
            } else if (year<3) {
                printf("35000");
            } else {
                printf("Invalid Input");
            }
            break;
        default:
        
            printf("Invalid Input");
            break;
    }

    return 0;
}
