#include <stdio.h>
#include <stdlib.h>
/*Double linked lists(which not only has next pointer link in single linked list but also a previous pointer link*/
/*NULL pointer do not have a access for the previous link*/
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

void insertmiddle(struct Node* afternode,int newval)
{
	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->data = newval;
	newnode->prev = afternode->prev;
	
	newnode->next = afternode;
	afternode->prev = newnode;
	newnode->prev->next = newnode;
}

int main()
{
	struct Node* head = NULL;
	
	insertstart(&head,12);
	insertstart(&head,22);
	insertstart(&head,8);
	insertstart(&head,13);
	insertmiddle(head->next->next,15);
	struct Node* n = head;
	while(n!=NULL)
	{
		printf("%d\n",n->data);
		n = n->next;
	}
	return 0;
}
