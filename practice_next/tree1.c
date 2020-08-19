#include <stdio.h> 
#include <stdlib.h> 
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
/*Propagating from only root node*/
int main()
{
	struct node* root = newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	root->left->left = newnode(4);
	return 0;
}
	
