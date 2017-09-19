/*
	If f(x) is a polynomial with given degree n, and given k, 
	compute f(k) using Linked Lists.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct node
{
	int root;
	int power;
	struct node *next;
};

struct node *head = (struct node*) malloc(sizeof(struct node));
struct node *top = (struct node*) malloc(sizeof(struct node));

void insert(int root, int power, int k)
{		
	struct node *temp = (struct node*) malloc(sizeof(struct node));
	temp->root=root;
	temp->power=power;
	temp->next=NULL;
	top->next=temp;
	top=temp;
	if(power==0)
		head->next=temp;
}

int compute(int k)
{
	int sum=0;
	struct node *trav = head;
	while(trav->next!=NULL)
	{
		printf("%d %d\n", trav->root, trav->power);
		sum+=trav->root*(pow(k, trav->power));
		trav=trav->next;
	}
	return sum;
}

int main()
{
	int n, k, power=0, sum=0;
	printf("Enter the degree (n) of the polynomial: ");
	scanf("%d", &n);
	printf("\nEnter k of f(k): ");
	scanf("%d", &k);
	while(n>=0)
	{
		int root;
		printf("Enter the root x^%d: ", power);
		scanf("%d", &root);
		insert(root, power, k);
		power++;
		n--;
	}
	sum=compute(k);
	printf("\nf(%d) is %d", k, sum);
	return 0;
}