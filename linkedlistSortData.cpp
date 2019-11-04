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
/* function to swap data of two nodes a and b*/
void swap(node *a, node *b) 
{ 
    int temp = a->data; 
    a->data = b->data; 
    b->data = temp; 
}

/* Bubble sort the given linked list */
void bubbleSort(node *start) 
{ 
    int swapped, i; 
    node *ptr1; 
    node *lptr = NULL; 
  
    /* Checking for empty list */
    if (start == NULL) 
        return; 
  
    do
    { 
        swapped = 0; 
        ptr1 = start; 
  
        while (ptr1->next != lptr) 
        { 
            if (ptr1->data > ptr1->next->data) 
            {  
                swap(ptr1, ptr1->next); 
                swapped = 1; 
            } 
            ptr1 = ptr1->next; 
        } 
        lptr = ptr1; 
    } 
    while (swapped); 
}

void sort1(node* start)
{
	node* ptr;
	int swapped=0;
	
	do
	{
		swapped=0;
		ptr = start;
		while(ptr->next!=NULL)
		{
			if(ptr->data>ptr->next->data)
			{
				swapped =1;
				swap(ptr,ptr->next);
			}
			ptr=ptr->next;
		}
	}while(swapped);
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


int main()
{
	head= push(head,54);
	head= push(head,23);
	head= push(head,12);
	head= push(head,124);
	head= push(head,98);
	display(head);
	cout<<"-------------------"<<endl;
//	bubbleSort(head);
	sort1(head);
	//head = sort(head);
	display(head);
	
	return 0;
}
