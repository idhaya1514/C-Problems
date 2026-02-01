
#include <stdio.h>

int main() {
	 int n,variable;
	 printf("enter the Intergers");
	 scanf("%d",&n);
	int count=0;
	int i=0;
	int streak=0;
	 int max=0;
	 
	
	while(i<n)
	{
	    printf("Enter the numbers");
	    scanf("%d",&variable);
	    
	    if(variable>70)
	    {
	       count++;
	       streak++;
	       
	       if(streak>max)
	    {
	        max=streak;
	    }
	       
	    }
	    else{
	        streak=0;
	    }
	    i++;
	} printf("%d\n",count);
	  printf("%d\n",max);
return 0;
}

