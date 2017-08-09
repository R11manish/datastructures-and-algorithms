/*
	Design an algorithm for the following “closest pair problem”: 
	Given n points x1, x2, x3,..., xn on the real line, find the pair 
	of points which are closest (in the sense of distance) of all 
	such pairs. Implement your algorithm in C programming language. 
	Distance is calculated as absolute difference between pair 
	of points.
*/

#include <iostream>

int main()
{
	int a, i, k, j;
	printf("Enter the no. of elements: ");
	scanf("%d", &a);
	int b[a], c[a];
	for(i=0; i<a; i++)
	{
		scanf("%d", &b[i]);
	}
	for(i=1; i<a; i++)
	{
		k=b[i];
		j=i-1;
		while(j>=0 && b[j]>k)
		{
			b[j+1]=b[j];
			j=j-1;
		}
		b[j+1]=k;
	}
	for(i=0; i<a; i++)
	{
		printf("%d\n", b[i]);
	}
	for(i=0;i<a-1;i++)
	{
		j=i+1;
		c[i]=b[j]-b[i];       
	}
	for(i=1; i<a; i++)
	{
		k=c[i];
		j=i-1;
		while(j>=0 && c[j]>k)
		{
			c[j+1]=c[j];
			j=j-1;
		}
		c[j+1]=k;
	}
	for(i=0; i<a-1; i++)
	{
		j=i+1;
		if(c[0]==b[j]-b[i])
		{
			printf("%d %d\n", b[j], b[i]);
		}       
	}
	printf("%d", c[0]);
}
