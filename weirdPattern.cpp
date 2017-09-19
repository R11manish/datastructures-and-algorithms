/*
	A
	BC
	CDEF
	DEFGHIJK
	EFGHIJKLMNOPQRST

	Get this pattern in both iterative and recursive form.
*/

#include <iostream>
#include <stdlib.h>
#include <math.h>

void iterative(int start)
{
	for(int i=0; i<5; i++)
	{	
		for(int j=0; j<pow(2,i); j++)
			printf("%c", start+j);
		start++;
		printf("\n");
	}
}

void recursive(int start, int steps)
{ 
	int length=steps, character=start;
	if(length<=16)
	{
		while(length>0)
		{
			printf("%c", character++);
			length--;
		}
	printf("\n");
	recursive(++start, steps*2);
	}
}

int main()
{
	int start=65;
	printf("---ITERATIVE---\n");
	iterative(start);
	printf("---RECURSIVE---\n");
	recursive(start, 1);
	return 0;
}