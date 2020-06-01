//BST of strings
#include<stdio.h>
#include<stdlib.h>

struct node
{
	char data[20];
	struct node *left, *right;
};
struct node *newNode(char a[20])
{
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	strcpy(temp->data,a);
	temp->left = temp->right = NULL;
	return temp;
}
void inorder(struct node *root)
{
	if (root != NULL)
	{
		inorder(root->left);
		printf("%s \n", root->data);
		inorder(root->right);
	}
}
struct node* insert(struct node* node,char key[20])
{
	// If the tree is empty, return a new node
	if (node == NULL) return newNode(key);
    // Otherwise recur the tree
	if (strcmpi(node->data,key)>0)
		node->left = insert(node->left, key);
	else
		node->right = insert(node->right, key);
	return node;
}
int main()
{
	struct node *root = NULL;
	root = insert(root,"Arthi");
	insert(root,"Dorothy");
	insert(root,"Christy");
	insert(root,"Fraser");
	insert(root,"Eliza");
	printf("inorder traversal is:\n");
	inorder(root);
	printf("\n\nINSERTING David :\n");
	insert(root,"David");
   inorder(root);
}
