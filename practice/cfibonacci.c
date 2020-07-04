#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[100],i,n;
	a[0] = 1;
	a[1] = 1;
	printf("Length of the fibonacci sequence:");
	scanf("%d",&n);
	printf("%d\n",a[0]);
	printf("%d\n",a[1]);
	for(i=2;i<n;i++)
	{
		a[i] = a[i-1] + a[i-2];
		printf("%d\n",a[i]);
	}
	return 0;
}

		
