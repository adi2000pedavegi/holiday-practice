#include <stdio.h>
#include <stdlib.h>
struct Node { 
    int data; 
    struct Node* next; 
}; 
int main()
{
	struct Node* head = (struct Node*)malloc(sizeof(struct Node)); 
	struct Node*second = (struct Node*)malloc(sizeof(struct Node)); 
	struct Node* third = (struct Node*)malloc(sizeof(struct Node)); 
	
	
	head->data = 12;
	head->next = second;
	second->data = 45;
	second->next = third;
	third->data = 93;
	third->next = NULL;
	
	struct Node* n = head;
	struct Node*k = third;
	printf("%d\n",k->data);
	while(n!=NULL)
	{
		printf("%d\n",n->data);
		n = n->next;
	}
	return 0;
}

