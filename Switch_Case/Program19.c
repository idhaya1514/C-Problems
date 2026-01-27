#include <stdio.h>

int main() {
        int student;
        int distance;
        scanf("%d",&student);
        scanf("%d",&distance);
        
        switch(student)
        {
            case 1:
                if(distance<=30){
                    printf("Eligible");
                    
                }
                else if (distance> 30)
                {
                    printf("Eligible with extra fee");
                }
                else {
                    printf("Invalid Inputs");
                } break;
            case 2:
                if(distance<=30)
                    {
                        printf("Eligible");
                    }
                else if (distance>30){
                        printf("Not Eligible");
                }break;
            default:
                printf("Invalid Input");
        }
        
return 0;
}

