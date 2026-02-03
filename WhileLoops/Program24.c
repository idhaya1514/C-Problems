#include <stdio.h>

int main() {
    int fuel, n, stage;
    int i = 0;
    int emergencyStage = -1;
    int fuelWasted = 0;

    printf("Enter the fuel: ");
    scanf("%d", &fuel);

    printf("Enter the number of stages: ");
    scanf("%d", &n);

    while (i < n) {
        printf("Enter the fuel burn for stage %d: ", i + 1);
        scanf("%d", &stage);

        fuel -= stage;

        if (fuel < 0 && emergencyStage == -1) {
            emergencyStage = i + 1;
            fuelWasted = -fuel;
            break;
        }

        i++;
    }

    if (emergencyStage != -1) {
        printf("Emergency Stage: %d\n", emergencyStage);
        printf("Fuel Wasted: %d\n", fuelWasted);
    } else {
        printf("Emergency Stage: Not Occurred\n");
        printf("Fuel Wasted: 0\n");
    }
    return 0;
}
