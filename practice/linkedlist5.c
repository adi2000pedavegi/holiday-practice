#include <stdio.h>
#include <stdlib.h>
/*Double linked lists(which not only has next pointer link in single linked list but also a previous pointer link*/
struct Node { 
    int data; 
    struct Node* next; 
    struct Node* prev; 
}; 

/*Inserting a node at the start of linked list*/ 
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
	
	insertstart(&head,7);
	insertstart(&head,45);
	insertstart(&head,97);
	insertstart(&head,83);
	
	struct Node* n = head;
	while(n!=NULL)
	{
		printf("%d\n",n->data);
		n = n->next;
	}
	return 0;
}

	
	
