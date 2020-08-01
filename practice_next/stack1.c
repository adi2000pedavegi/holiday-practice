#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
struct Stack { 
    int top; 
    int capacity; 
    int* array; 
}; 
struct Stack* createStack(int capacity) 
{ 
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack)); 
    stack->capacity = capacity; 
    stack->top = -1; 
    stack->array = (int*)malloc(stack->capacity * sizeof(int)); 
    return stack; 
} 
  
void push(struct Stack* stack,int value)
{
	stack->array[++stack->top] = value;
	printf("%d\n",value);
}

int pop(struct Stack* stack)
{
	return stack->array[stack->top--]; 
}

int peek(struct Stack* stack)
{
	return stack->array[stack->top];
}

int main()
{
	struct Stack* stack = createStack(20); 
	push(stack,5);
	push(stack,72);
	push(stack,93);
	
	printf("%d\n",pop(stack));
	printf("%d\n",peek(stack));
	return 0;
}

	
