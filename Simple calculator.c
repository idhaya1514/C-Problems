#include <stdio.h>

int main()
{
    float n1, n2;
    scanf("%f %f",&n1,&n2);
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    int r;
    scanf("%d",&r);
    switch(r)
    {
        case 1:
            printf("%.2f",n1+n2);
            break;
        case 2:
            printf("%.2f",n1-n2);
            break;
        case 3 :
            printf("%.2f",n1*n2);
            break;
        case 4:
            printf("%.2f",n1/n2);
            break;
        default :
            printf("Invalid Inputs");
    }
    
    return 0;
}