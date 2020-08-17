#include <stdio.h>
#include <stdlib.h>
int n=10,top=-1,*stack;
void push(int x)
{
	stack[++top] = x;
}

int pop()
{
	if(top==-1)
	{
		return -1;
	}
	else
	{
		return stack[top--];
	}
	
}

int peek()
{
	if(top==-1)
	{
		return -1;
	}
	else
	{
		return stack[top];
	}
	
	
}

void display()
{
	int i;
	for(i=top;i>-1;i--)
	{
		printf("%d\n",stack[i]);
	}
}

	
int main()
{
	
	int j;
	stack = (int*)malloc(n*sizeof(int));
	for(j=0;j<5;j++)
	{
		push(13*j);
	}
	display();
	printf("\n");
	printf("%d",peek());
	printf("%d",pop());
	printf("%d",peek());
	printf("%d",pop());
	display();
	return 0;
}

	
	
