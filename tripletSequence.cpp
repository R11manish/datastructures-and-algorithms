/*
	Finding the triplet sequence in a list of 
	values such that the triplet is ordered 
	xi>xi+1>xi+2
	17, 29, 2, 38, 57, 19, 43, 21, 3, 7 ----> (2,38, 57)
*/

#include <stdio.h>

int main()
{
	int size, i, j, flag=0;
	int pair[3];
	printf("Enter the size of the list: ");
	scanf("%d", &size);
	int arr[size];
	for(i=0; i<size; i++)
		scanf("%d", &arr[i]);
	for(j=0; j<size-2; j++)
	{
		if(arr[j]<arr[j+1] && arr[j+1]<arr[j+2])
		{
			pair[0]=arr[j];
			pair[1]=arr[j+1];
			pair[2]=arr[j+2];
			break;
		}
	}
	printf("\nTriplet Sequence: (%d, %d, %d)\n", pair[0], pair[1], pair[2]);
	return 0;
}