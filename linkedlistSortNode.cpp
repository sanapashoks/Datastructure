#include<iostream>
#include<stdlib.h>
using namespace std;

typedef struct _node
{
	struct _node *next;
	int data;
}node;

node* head=NULL;

node* push(node* start, int data)
{

	node* ptr = start;
	node* new_node = (node*) malloc(sizeof(node));
	if(new_node==NULL)
	{
		cout<<"Memory error"<<endl;
		return start;
	}
	new_node->data = data;
	//cout<<"stage1"<<endl;
	if(start == NULL)
	{
		start = new_node;
		new_node->next = NULL;
	//	cout<<"stage2"<<endl;
	}
	else
	{
		new_node->next=start;
		start=new_node;	
	//	cout<<"stage3"<<endl;
	}	
	
	return start;
}

display(node* start)
{
	node* ptr = start;
	
	while(ptr!=NULL)
	{
		cout<<ptr<<":"<<ptr->data<<endl;
		ptr=ptr->next;
	}
}

node* sort(node* start)
{
	node* ptr;node *cptr;
	int temp;
	ptr = start;
	if(ptr==NULL)
		return start;
		
	while(ptr->next!=NULL)
	{
		cptr = ptr->next;
		while(cptr!=NULL)
		{
			if((ptr->data)>(cptr->data))
			{	// swap data
				temp = ptr->data;
				ptr->data = cptr->data;
				cptr->data = temp;				
			}
			cptr = cptr->next;
		}
		ptr=ptr->next;
	}
	return start;
}

node* swapa(node* p1, node* p2)
{
//	 node* temp = 
	 p1->next = p2->next;
	 p2->next=p1;
}

//node* swapb(node* ptr1, node* ptr2) 
//{ 
//    node* tmp = ptr2->next; 
//    ptr2->next = ptr1; 
//    ptr1->next = tmp; 
//    return ptr2; 
//} 
node* sort_node(node* start)
{
	node* ptr=start;
	
	node* pre=NULL;
	int swapped;
	do
	{
		pre = NULL;
		ptr=start;
		swapped =0;
//		cout<<"stage1"<<endl;
		while(ptr->next!=NULL)
		{
			
//			cout<<"stage2"<<endl;
			if(ptr->data>ptr->next->data)
			{
//				cout<<"stage3"<<endl;
				swapped=1;
				ptr = swapa(ptr,ptr->next);			
				if(pre==NULL)
				{
					start=ptr;
				}	
				else
				{
					pre->next=ptr;
				}
			}
			
			pre=ptr;
			ptr=ptr->next;
//			display(start);
			
		}
	}while(swapped);
	return start;
}
int main()
{
	head= push(head,54);
	head= push(head,23);
	head= push(head,12);
	head= push(head,124);
	head= push(head,98);
	cout<<"Before Sofrting"<<endl;
	display(head);
	cout<<"After Sorting"<<endl;
	//head = sort(head);
	head = sort_node(head);
	display(head);
	
	return 0;
}
