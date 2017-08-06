/*
Implement a stack of n elements using arrays. Write functions to perform PUSH and POP opeartions. 
Implement queries using the push and pop functions to:
- Retrive the mth element of the stack S from the top (m<n), leaving the stack without its top m-1 elements.
- Retain only the elements in the odd position of the stack and pop out all even positioned elements.
*/

#include <stdio.h>
#include <stdlib.h> 

void push(int arr[], int size, int *top, int item)
{
	if(*top==size)
		printf("\nStack is full! ");
	else
	{
		*top+=1;
		arr[*top]=item;
	}
}

int pop(int arr[], int *top)
{
	if(*top<=0)
		printf("\nStack is empty! ");
	else
	{
		*top-=1;
		return arr[(*top)+1];
	}
	return 0;
}

void display(int arr[], int *top)
{
	int i;
	for(i=1; i<=*top; i++)
		printf("%d ", arr[i]);
}

void mth(int arr[], int size, int *top, int m)
{
	int temp[size], temptop=0, flag=1, len=*top;
	while(*top>(len-m)+1)
	{
		if(len-m<0 || m<0)
		{	printf("\nOut of Range");
			flag=0;
			break;
		}
		else
			push(temp, size, &temptop, pop(arr, top));
	}
	if(flag)
	{
		pop(arr, top);
		while(temptop>0)
				push(arr, size, top, pop(temp, &temptop));
		display(arr, top);
	}
}

void odd(int arr[], int size, int *top)
{
	int temp[size], temptop=0;
	while(*top>0)
	{
		if(*top==1)
			break;
		if(*top%2!=0)
		{
			push(temp, size, &temptop, pop(arr, top));
		}
		pop(arr, top);
	}
	while(temptop>0)
		push(arr, size, top, pop(temp, &temptop));
	display(arr, top);
}

int main()
{
	int choice, size;
	printf("Enter the size of your stack: ");
	scanf("%d", &size);
	int arr[size], top=0;
	while(choice!=0)
	{
		printf("\n\n1)Push\n2)Pop\n3)Display\n4)mth element\n5)Odd\n\nEnter your choice (Press 0 to exit): ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1: 
				int item;
				printf("\nEnter the item: ");
				scanf("%d", &item);
				push(arr, size, &top, item);
				display(arr, &top);
				break;
			case 2:
				pop(arr, &top);
				display(arr, &top);
				break;
			case 3:
				display(arr, &top);
				break;
			case 4:
				int m;
				printf("\nEnter m? ");
				scanf("%d", &m);
				mth(arr, size, &top, m);
				break;
			case 5:
				odd(arr, size, &top);
				break;
		}
		system("clear");
	}
	return 0;
}