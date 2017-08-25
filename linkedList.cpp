#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
	int data;
	struct node *next; //Pointer that can hold the address of another memmory of datatype struct node
};

struct node *head = (struct node*) malloc(sizeof(struct node)); //Start of the linkedList
struct node *top = (struct node*) malloc(sizeof(struct node)); //Top of the linkedList

void insert(int data, int *count)
{		
	struct node *temp = (struct node*) malloc(sizeof(struct node));
	temp->data=data;
	temp->next=NULL;
	top->next=temp;
	top=temp;
	if(*count==0)
		head->next=temp;
}

void pop()
{
	struct node *pop = head;
	while(pop->next!=NULL)
	{
		if(pop->next->next==NULL)
		{
			pop->next=NULL;
			top=pop;
			break;
		}
		pop=pop->next;
	}
}

void display()
{
	struct node *disp = head; //node that goes through the entire linkedList from head to when that node's->next==NULL
	while(disp->next!=NULL)
	{
		cout<<disp->next->data<<" ";
		disp=disp->next;
	}
}

int main()
{
	int choice, count=0;
	head->next=NULL;
	while(choice)
	{
		printf("\n1)Insert\n2)Pop\n3)Display\nEnter your choice: ");
		cin>>choice;
		switch(choice)
		{
			case 1:
				int data;
				cout<<"Enter data: "; cin>>data;
				insert(data, &count);
				count++;
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
		}
		system("clear");
	}
	return 0;
}