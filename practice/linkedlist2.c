#include <stdio.h>
#include <stdlib.h>
struct Node 
{ 
  int data; 
  struct Node* next; 
}; 
void insertstart(struct Node** headr,int newval)
{
	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->data = newval;
	newnode->next = *headr;
	*headr = newnode;
}
void insertmid(struct Node* prevnode,int newval)
{
	struct Node* nextnode = (struct Node*)malloc(sizeof(struct Node));
	nextnode->data = newval;
	nextnode->next = prevnode->next;
	prevnode->next = nextnode;
}
void insertend(struct Node** headr,int newval)
{
	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->data = newval;
	newnode->next = NULL;
	struct Node* last = *headr;
	last->next  = newnode;
}

	
	
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
	
	insertstart(&head,37);
	insertmid(second,78);
	insertend(&third,65);
	struct Node* n = head;
	while(n!=NULL)
	{
		printf("%d\n",n->data);
		n = n->next;
	}
	return 0;
}


