#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,n,a[100],k;
	printf("enter the size of the array:\n");
	scanf("%d",&n);
	printf("enter the elements of the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the required element:");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			printf("element found at index %d",i);
			break;
		}
	}
	return 0;
}

		
