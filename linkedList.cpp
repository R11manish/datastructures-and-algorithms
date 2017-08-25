#include <iostream>
#include <stdlib.h>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

struct node *head = (struct node*) malloc(sizeof(struct node));
struct node *top = (struct node*) malloc(sizeof(struct node));

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

void display()
{
	struct node *disp = head;
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
		printf("\n1)Insert\n2)Display\nEnter your choice: ");
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
				display();
				break;
		}
		system("clear");
	}
	return 0;
}