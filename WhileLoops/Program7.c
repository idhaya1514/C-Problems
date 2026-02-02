#include<stdio.h>
int main(){
    int maxweight;
    int n;
    int weight;
    int total=0;
    int count=0;
    int rem;
    printf("Enter the maxweight\n");
    scanf("%d",&maxweight);
    
    printf("Enter the N\n");
    scanf("%d",&n);

    
    int i=0;
   
    while(i<n)
    {
        printf("Enter the weights\n");
        scanf("%d",&weight);
        
        
        rem=total+weight;
        if(rem<maxweight){
        count++;
        
        }
        else
        {
            break;
        }
        total=rem;
        i++;
    } 
    if(rem>maxweight)
    {
        printf(" overload :Yes\n");
    }
    else{
        printf(" Overload :No\n");
    }
    printf(" Passengers Allowed:%d\n",count);

return 0;
}