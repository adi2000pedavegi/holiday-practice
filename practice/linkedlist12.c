#include <stdio.h>
#include <stdlib.h>
struct Node 
{ 
    int data; 
    struct Node *next; 
}; 
/*Inserting at the start of a circular linked list for a intial empty list(NULL)(ocuurs in terms of self loop)*/
/*Returning the structural node*/
struct Node* insertempty(struct Node* last,int newval)
{
	if(last!=NULL)
	{
		return last;
	}
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node)); 
	temp->data = newval;
	last = temp;
	last->next = last;/*Circular linked list self-loop*/
	return last;
}

/*Inserting starting of a circular linked list which is not NULL*/
struct Node* insertstart(struct Node* last,int newval)
{
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node)); 
	temp->data = newval;
	temp->next = last->next;
	last->next = temp;
	return last;
}
/*Inserting a node at the end of a circular linked list(which is not NULL)*/
struct Node* insertend(struct Node* last,int newval)
{
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node)); 
	temp->data = newval;
	temp->next = last->next;
	last->next = temp;
	last = temp;
	return last;
}

/*Inserting a node at the middle of a circular linked list(which is not NULL)*/
struct Node* insertmiddle(struct Node* last,int newval,int oldval)
{
	
	
	struct Node* n = last->next;
	do
	{
		if(n->data == oldval)
		{
			struct Node* temp = (struct Node*)malloc(sizeof(struct Node)); 
			temp->data = newval;
			temp->next = n->next;
			n->next = temp;
		}
		
			
		n = n->next;
	} while(n!=last->next);
	return last;
}


		
int main()
{
	struct Node* last = NULL;
	last = insertempty(last,12);
	last = insertstart(last,22);
	last = insertstart(last,8);
	last = insertstart(last,13);
	last = insertend(last,22);
	last = insertend(last,8);
	last = insertmiddle(last,153,22);
	struct Node* n = last->next;/*Iniatilizing the actual header pointer from the last node*/
	/*Running till the header reaches again*/
	do
	{
		printf("%d\n",n->data);
		n=n->next;
	}
	while(n!=last->next);
	
	return 0;
}

	

