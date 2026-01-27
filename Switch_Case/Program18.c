#include <stdio.h>

int main() {
	int attempt;
	int mark;
	scanf("%d",&attempt);
	scanf("%d",&mark);
	
	switch(attempt)
	{
	    case 1:
	       if(mark>=80)
	       {
	           printf("Excellent");
	       }
	       else{
	           printf("Not Qualified");
	           }break;
	    case 2:
	        if(mark>=60)
	        {
	            printf("Good");
	        }
	        else{
	            printf("Not Qualified");
	            }break;
	    case 3:
	        printf("Needs Improvement");
	        break;
	    default:
	        printf("Invalid");
	}
}

