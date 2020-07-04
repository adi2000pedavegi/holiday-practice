#include <stdio.h>
int fibonacci(int i)
{
	if(i==0)
	{
		return 1;
	}
	if(i==1)
	{
		return 1;
	}
	else
	{
		return fibonacci(i-1) + fibonacci(i-2);
	}
}
int main()
{
	int k,i;
	printf("Enter the number:\n");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		printf("%d\n",fibonacci(i));
	}
	return 0;
}

