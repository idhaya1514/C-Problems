#include <stdio.h>

int main() {
	
	int size;
	scanf("%d",&size);
	int arr[size];
	
	for(int i=0;i<size;i++)
	{
	    scanf("%d",&arr[i]);
	}
	int k;
	scanf("%d",&k);
	
	for(int i=k;i<size;i++)
	{
	    printf("%d",arr[i]);
	}
	for(int j=0;j<k;j++)
	{
	    printf("%d",arr[j]);
	}
}

