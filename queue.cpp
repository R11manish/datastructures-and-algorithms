/*
	A Backup_Queue is defined as follows: Let Q be a queue of size k.
	After every k insert operations, we make a copy of the queue for
	backup purposes. Insert ‘n’ operations on the Backup_Queue
	including copying the queue.
*/

#include <stdio.h>
#include <stdlib.h>

void enqueue(int arr[], int *f, int *r, int size, int item)
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

void dequeue(int arr[], int *f, int *r)
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

void backuparr (int arr[], int *f, int *r, int backup[])
{
	int j, k=0;
	for(j=*f; j<=*r; j++)
	{
		backup[k]=arr[j];
		k++;
	}
	printf("Backup is: ");
	display(backup, 0, j);
	*f=-1;
	*r=-1;
}

int main()
{
	int size, choice=1, f=-1, r=-1;
	printf("Enter the size of the queue: ");
	scanf("%d", &size);
	int arr[size], backup[size];
	while(choice)
	{
		printf("\n1)Enqueue\n2)Dequeue\n3)Display\n4)Display backup\nEnter your choice: ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				if(r==size-1)
					backuparr(arr, &f, &r, backup);
				else
				{
					int item;
					printf("Element: ");
					scanf("%d", &item);
					enqueue(arr, &f, &r, size, item);
					display(arr, f, r);
				}
				break;
			case 2:
				dequeue(arr, &f, &r);
				display(arr, f, r);
				break;
			case 3:
				display(arr, f, r);
				break;
			case 4:
				display(backup, 0, size);
		}
		system("clear");
	}
	return 0;
}