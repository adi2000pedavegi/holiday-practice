#include <stdio.h>
int factorial(int i)
{
	if(i==0)
	{
		return 1;
	}
	else
	{
		return i*factorial(i-1);
	}
}

int main()
{
	int k;
	printf("Enter the number:\n");
	scanf("%d",&k);
	printf("Factorial of the number is :%d",factorial(k));
	return 0;
}

