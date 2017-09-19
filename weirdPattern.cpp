#include <iostream>
#include <stdlib.h>
#include <math.h>

int main()
{
	int start=65;
	for(int i=0; i<5; i++)
	{	
		for(int j=0; j<pow(2,i); j++)
			printf("%c", start+j);
		start++;
		printf("\n");
	}
	return 0;
}