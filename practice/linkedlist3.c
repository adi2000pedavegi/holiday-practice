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
/*Solving through iteration*/
int num(struct Node* head)
{
	int count = 0;
	struct Node* n = head;
	while(n!=NULL)
	{
		count++;
		/*count = count + 1;*/
		n = n->next;
	}
	return count;
}

int renum(struct Node* head)
{
	if(head==NULL)
	{
		return 0;
	}
	else
	{
		return 1+renum(head->next);
	}
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
	printf("%d\n",num(head));
	printf("%d\n",renum(head));
	return 0;
	
}
