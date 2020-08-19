#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h> 
#include <float.h>

/*initially assignig both left and right nodes of a tree(binary tree having 2 nodes) */
struct node  
{ 
    int data; 
    struct node *left; 
    struct node *right; 
}; 
/*At a time assigning subnodes as null and including data into it*/
struct node* newnode(int data)
{
	struct node* node = (struct node*)malloc(sizeof(struct node)); 
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return node;
}
/*maximum depth of a tree proceeding in both ways recursively evaluating maximum depth in both the right and left child nodes*/ 
int maxdepth(struct node* node)
{
	if(node==NULL)
	{
		return 0;
	}
	else
	{
		return 1 + fmax(maxdepth(node->left),maxdepth(node->right));
	}
}

		
/*Propagating from only root node*/
int main()
{
	struct node* root = newnode(13);
	root->left = newnode(8);
	root->right = newnode(22);
	root->left->right = newnode(12);
	root->left->right->left = newnode(2);
	printf("%d",maxdepth(root));
	return 0;
}
	

