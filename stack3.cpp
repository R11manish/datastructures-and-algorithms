/*
	Write a C program that tests the application function reverse(stack); 
	which reverse the items on the stack passed to it. 
	This function should use two local stacks to do its job.
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

void reverse(int arr[], int size, int *top)
{
	int temp1[size], temp2[size], temp1top=0, temp2top=0; //Two local stacks
	while(*top>0)
		push(temp1, size, &temp1top, pop(arr, top));
	while(temp1top>0)
		push(temp2, size, &temp2top, pop(temp1, &temp1top));
	while(temp2top>0)
		push(arr, size, top, pop(temp2, &temp2top)); 
	display(arr, top); printf("\n");
}

int main()
{
	int size, item;
	printf("Enter the size of your stack: ");
	scanf("%d", &size);
	int arr[size], top=0;
	printf("\nEnter the elements of the stack: ");
	while(top<size)
	{
		scanf("%d", &item);
		push(arr, size, &top, item);
	}
	reverse(arr, size, &top);
	return 0;
}
