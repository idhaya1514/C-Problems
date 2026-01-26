#include <stdio.h>

int main()
{
   printf("1.Addtion\n");
   printf("2.Subtraction\n");
   printf("3.Multiplication\n");
   printf("4.Division\n");
   int n,a,b;
   printf("Enter your choice");
   scanf("%d",&n);
   printf("Enter two numbers\n");
   scanf("%d\n%d",&a,&b);
    
    switch(n)
    {
        case 1:
        printf("sum=%d",a+b);
        break;
        
        case 2:
            printf("Difference =%d",a-b);
            break;
        case 3:
            printf("Multiply =%d",a*b);
            break;
        case 4:
            printf("Divide =%d",a/b);
            break;
        default :
            printf("Invalid Input");
    }
    return 0;
}