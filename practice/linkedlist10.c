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

void reverse(struct Node** headr)
{
	struct Node* temp = NULL;
	struct Node* current = *headr;
	/*Performing swap operation between previous nodes and next nodes for reversing of linked list*/
	/*Updating current node at each iteration*/
	while(current!=NULL)
	{
		temp = current->prev;
		current->prev = current->next;
		current->next = temp;
		
		current = current->prev;
	}
	/*Updating the header pointer of the linked list*/
	*headr = temp->prev;
}
		
int main()
{
	struct Node* head = NULL;
	
	insertstart(&head,12);
	insertstart(&head,22);
	insertstart(&head,153);
	insertstart(&head,8);
	insertstart(&head,13);
	struct Node* m = head;
	while(m!=NULL)
	{
		printf("%d\n",m->data);
		m = m->next;
	}
	
	reverse(&head);
	printf("Reversing the linked list");
	printf("\n");
	struct Node* n = head;
	while(n!=NULL)
	{
		printf("%d\n",n->data);
		n = n->next;
	}
	return 0;
}

