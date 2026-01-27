#include <stdio.h>

int main() {
    int plan;
    float data;

    scanf("%d", &plan);
    scanf(" %f", &data);

    switch(plan) {
        case 1:
            if (data<=1)
            {
                printf("Normal Speed");
            } 
            else if (data>1) {
                printf("Speed Reduce");
            }
            break;
        case 2:
            if (data<=2) {
                printf("Normal Speed");
            } else if (data>2) {
                printf("Speed Reduce");
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
