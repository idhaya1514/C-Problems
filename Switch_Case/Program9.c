#include <stdio.h>

int main() {
    int r;
    char s;

    scanf("%d", &r);
    scanf(" %c", &s);

    switch(r) {
        case 1:
            if (s == 'a' || s == 'A') {
                printf("2500");
            } else if (s == 'b' || s == 'B') {
                printf("2000");
            }
            break;
        case 2:
            if (s == 'c' || s == 'C') {
                printf("4000");
            } else if (s == 'D' || s == 'd') {
                printf("3000");
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
