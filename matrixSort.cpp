/*
  Assume that a square matrix is called a Matrix Sorted Array, 
  only if all the entries are in an increasing order both row 
  and column wise. The below matrix is an example of the Matrix 
  Sorted Array. Design an efficient algorithm to convert the 
  given square matrix into a Matrix Sorted Array. Implement your 
  algorithm in C programming language. 
*/

#include <iostream>
 
int main()
{
	int r, c;
	printf("Enter the no. of rows: ");
	scanf("%d", &r);
	printf("Enter the no. of columns: ");
	scanf("%d", &c);
	int a[r][c], i, j, k, l;
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			scanf("%d",&a[i][j]);   
		}
	}
	for(int l=0;l<r;l++)
	{
		for(i=1;i<r;i++)
		{
			k=a[l][i];
			j=i-1;
			while(j>=0 && a[l][j]>k)
			{
				a[l][j+1]=a[l][j];
				j=j-1;
			}
			a[l][j+1]=k;
		}
	}
	for(l=0;l<c;l++)
	{
		for(i=1;i<c;i++)
		{
			k=a[i][l];
			j=i-1;
			while(j>=0 && a[j][l]>k)
			{
				a[j+1][l]=a[j][l];
				j=j-1;
			}
			a[j+1][l]=k;
		}
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d ", a[i][j]);   
		}
		printf("\n");
	}
}
