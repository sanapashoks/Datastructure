#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct _node
{
	struct _node *next;
	int data;	
} node;

node* Head=NULL;

void display(node *start)
{
	node *ptr = start;
		while(start!=NULL)
		{
			cout<<ptr->data<<"->"<<endl;
			ptr = ptr->next;
		}
}
int main(int argc, char* argv[])
{
	node *ptr;
	int i=0;
	Head =(node*) malloc(sizeof(node));
	ptr = Head;
	ptr=ptr->next;
	for(i=0;i<10;i++)
	{
		ptr = (node*) malloc(sizeof(node));
		ptr = ptr->next;
	}
	display(ptr);
	return 0;
}
