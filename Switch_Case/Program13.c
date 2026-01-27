#include <stdio.h>

int main() {
    int loan;
    int score;
    
    scanf("%d",&loan);
    scanf(" %d",&score);

    switch(loan) {
        case 1:
            if (score >= 650 && score < 699) {
                printf("Manual Review");
            }
             else if (score<700)
            {
                printf("Rejected");
            } 
         
            else if (score>700){
                printf("Approval");
            }
            break;
        case 2:
            if (score >=700) {
                printf("Approval");
            } else if (score < 700) {
                printf("Rejected");
            }
            break;
        default:
        
            printf("Invalid Input");
            break;
    }

    return 0;
}
