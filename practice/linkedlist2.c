#include <stdio.h>
#include <stdlib.h>
struct Node 
{ 
  int data; 
  struct Node* next; 
}; 
/*Inserting a node at the start so the head of the linked list should be called*/
void insertstart(struct Node** headr,int newval)
{
	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->data = newval;
	newnode->next = *headr;  /*Iniatial header is next to newnode*/
	*headr = newnode;        /*New header is new node*/
}

/*Inserting at middle of some node list*/
void insertmid(struct Node* prevnode,int newval)
{
	struct Node* nextnode = (struct Node*)malloc(sizeof(struct Node));
	nextnode->data = newval;
	nextnode->next = prevnode->next;  /*The main next node is next to initial previous node*/
	prevnode->next = nextnode;        /*Overwriting the next of previous node to new node*/
}
/*Insert at the end of list*/
void insertend(struct Node* lastnode,int newval)
{
	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->data = newval;
	newnode->next = NULL;
	
	lastnode->next  = newnode;
}

	
	
int main()
{
	struct Node* head = (struct Node*)malloc(sizeof(struct Node)); 
	struct Node*second = (struct Node*)malloc(sizeof(struct Node)); 
	struct Node* third = (struct Node*)malloc(sizeof(struct Node)); 
	
	/*Initial linked list*/
	head->data = 12;
	head->next = second;
	second->data = 45;
	second->next = third;
	third->data = 93;
	third->next = NULL;
	
	insertstart(&head,37);
	insertmid(second,78);
	insertend(third,65);
	struct Node* n = head;
	while(n!=NULL)
	{
		printf("%d\n",n->data);
		n = n->next;
	}
	return 0;
}


