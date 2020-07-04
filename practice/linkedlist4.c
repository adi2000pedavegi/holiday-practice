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
void reverse(struct Node** headr)
{
	struct Node* current = *headr;
	struct Node* prev = NULL;
	struct Node* next = NULL;
	while(current!=NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*headr = prev;
}

	
int main()
{
	struct Node* head = NULL;
	insertstart(&head,7);
	insertstart(&head,45);
	insertstart(&head,97);
	insertstart(&head,83);
	
	struct Node* n = head;;
	while(n!=NULL)
	{
		printf("%d\n",n->data);
		n = n->next;
	}
	printf("Reversed linked list\n");
	reverse(&head);
	struct Node* k = head;
	while(k!=NULL)
	{
		printf("%d\n",k->data);
		k = k->next;
	}
	
	return 0;
	
}
