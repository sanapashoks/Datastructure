#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct __node
{
	struct __node* left;
	struct __node* right;
	int data;
}node;

node* get_newnode(int data)
{
	node* newnode = (node*) malloc(sizeof(node));
	if(newnode == NULL)
	{
		cout<<"Memory not allocateed"<<endl;
	}
	newnode->data = data;
	newnode->left = NULL;
	newnode->right = NULL;
	
	return(newnode);
}

void printPreorder(node* lnode)
{
	if(lnode == NULL)
		return ;
	
	cout<<lnode->data<<endl;
	printPreorder(lnode->left);
	
	printPreorder(lnode->right);
	
}

void printInorder(node* lnode)
{
	if(lnode == NULL)
		return ;
	
	printInorder(lnode->left);
	cout<<lnode->data<<endl;
	printInorder(lnode->right);	
}

void printPostorder(node* lnode)
{
	if(lnode == NULL)
		return ;
	
	printPostorder(lnode->left);	
	printPostorder(lnode->right);
	cout<<lnode->data<<endl;	
}

int main(int argc, char* argv[])
{
	node* root = get_newnode(1);
	
	root->left = get_newnode(2);
	root->right = get_newnode(3);
	
	root->left->left = get_newnode(4);
	root->right->left = get_newnode(5);
	root->right->right = get_newnode(6);
	
	cout<<"Preorer Traversal"<<endl;
	printPreorder(root);
	
	cout<<"Inorder Traversal"<<endl;
	printInorder(root);
	
	cout<<"Postorder Traversal"<<endl;
	printPostorder(root);
	return 0;
}
