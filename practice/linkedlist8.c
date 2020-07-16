#include <stdio.h>
#include <stdlib.h>
struct Node { 
    int data; 
    struct Node* next; 
    struct Node* prev; 
}; 

void insertstart(struct Node** headr,int newval) 
{ 
	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node)); 
	newnode->data = newval;   
    newnode->next = *headr;    /*As we are adding a newnode at the start,the next of this newnode should be previous head*/
    newnode->prev = NULL;      /*As it is double linked link we have create two links previous and next*/
    if(*headr!=NULL)
    {
		(*headr)->prev = newnode;    /*Previous of previous case header must be newnode as we have to declare two nodes in double linked list*/
	}
	*headr = newnode;  /*Updated header must be newnode for the updated linked list*/
} 

int main()
{
	struct Node* head = NULL;
	struct Node* try = (struct Node*)malloc(sizeof(struct Node)); 
	insertstart(&head,12);
	insertstart(&head,22);
	insertstart(&head,8);
	insertstart(&head,13);
	
	struct Node* last = head;
	while(last->next!=NULL)
	{
		last = last->next;
	}
	struct Node* n = head;
	struct Node* m = last;
	while(m!=NULL)
	{
		printf("%d\n",m->data);
		m = m->prev;
	}
	printf("\n");
	while(n!=NULL)
	{
		printf("%d\n",n->data);
		try = n;
		n = n->next;
	}
	printf("\n");
	while(try!=NULL)
	{
		printf("%d\n",try->data);
		try = try->prev;
	}
	
		
	return 0;
}
