
#include <stdio.h>

int main()
{
    int units,bill;
    int c_type;
    scanf("%d\n",&c_type);
    scanf("%d",&units);
    
    switch(c_type)
    {
        case 1:
        if(units<=100){
           bill=units*3;
           printf("%d",bill);
           break;
        }   
        else if(units>100 && units<=200)
        {
            bill=((100*3)+(units-100)*5);
            bill=bill-80;
            printf("%d",bill);
            break;
        }
    
        else if(units>200 && units<1000)
        {
            bill=((100*3)+(100*5)+(units-200)*7);
            bill=bill-80;
            printf("%d",bill);
            break;
        }
        case 2:
        if(units<100)
        {
            bill=units*7;
            printf("%d",bill);
            break;
        }
        else{
            bill=((100*7)+(units-100)*10);
            printf("%d",bill);
            break;
        }
        }
    return 0;
}