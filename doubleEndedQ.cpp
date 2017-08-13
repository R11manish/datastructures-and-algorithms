/*
	A Backup_Queue is defined as follows: Let Q be a queue of size k.
	After every k insert operations, we make a copy of the queue for
	backup purposes. Insert ‘n’ operations on the Backup_Queue
	including copying the queue.
*/

#include <stdio.h>
#include <stdlib.h>

void frontInsert(int arr[], int *f, int *r, int size, int item)
{
	if(*f==-1 && *r==-1)
	{
		*r+=1;
		arr[*r]=item;
	}
	else if(*r==size-1)
		printf("\nQueue is full!");
	else
	{
		*r+=1;
		arr[*r]=item;
	}
}

void reardInsert(int arr[], int *f, int *r, int size, int item)
{
	if(*f==-1 && *r==-1)
	{
		*r+=1;
		arr[*r]=item;
	}
	else if(*r==size-1)
		printf("\nQueue is full!");
	else
	{
		*r+=1;
		arr[*r]=item;
	}
}

void frontDelete(int arr[], int *f, int *r)
{
	if(*f==*r)
		printf("\nQueue is empty!");
	else
		*f+=1;
}

void display(int arr[], int f, int r)
{
	int i;
	if(f==r)
		printf("\nStack is empty!");
	else
	{
		for(i=f+1; i<=r; i++)
			printf("%d ", arr[i]);
	}
}

int main()
{
	int size, choice=1, f=-1, r=-1;
	printf("Enter the size of the queue: ");
	scanf("%d", &size);
	int arr[size], f2=size, r2=size;
	while(choice)
	{
		printf("\n1)Front insert\n2)Front delete\n3)Rear insert\n4)Rear delete\n5)Display\nEnter your choice: ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				int item;
				printf("Element: ");
				scanf("%d", &item);
				frontInsert(arr, &f, &r, size, item);
				display(arr, f, r);
				break;
			case 2:
				frontDelete(arr, &f, &r);
				display(arr, f, r);
				break;
			case 3:
				
				break;
			case 4:

				break;
			case 5:
				display(arr, f, r);
				break;
		}
		system("clear");
	}
	return 0;
}