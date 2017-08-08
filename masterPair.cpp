/*
	Finding the master pair in a list of values. 
	A master pair (xi, xj) is one whose sum is 
	the greatest of all other possible pairs.
*/

#include <stdio.h>

int main()
{
	int size, i, max=0;
	int pair[2];
	printf("Enter the size of the list: ");
	scanf("%d", &size);
	int arr[size];
	for(i=0; i<size; i++)
		scanf("%d", &arr[i]);
	int j, k;
	for(j=0; j<size-1; j++)
	{
		for(k=j+1; k<size; k++)
		{
			if(arr[j]+arr[k]>max)
			{
				max=arr[k]+arr[j];
				pair[0]=arr[k];
				pair[1]=arr[j];
			}
		}
	}
	printf("\nMaster Pair: (%d, %d)\n", pair[0], pair[1]);
	return 0;
}