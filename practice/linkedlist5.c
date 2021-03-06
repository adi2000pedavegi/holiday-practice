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

/*Inserting a node at the middle of the list*/
void insertmiddle(struct Node* prevnode,int newval)
{
	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node)); 
	newnode->data = newval;
	/*Let us take previous node as B and after node as C initially(B->next = C)*/
	/*Inserting a node between B and C(next of newnode should be C*/
	newnode->next = prevnode->next; 
	/*Updated next of B should be newnode*/
	prevnode->next = newnode;
	/*As it is DLL we have the along with next pointer we have to define previous pointer also*/
	newnode->prev = prevnode;
	/*Accesing node C somehow using newnode and prevnode variables*/
	newnode->next->prev = newnode;
}

int main()
{
	struct Node* head = NULL;
	
	insertstart(&head,7);
	insertstart(&head,45);
	insertstart(&head,97);
	insertstart(&head,83);
	insertmiddle(head->next->next,13);
	struct Node* n = head;
	while(n!=NULL)
	{
		printf("%d\n",n->data);
		n = n->next;
	}
	return 0;
}

	
	
