/*
	The Lucas number is same as the Fibonacci number. 
	It is given by the following recurrence equation: 
	L(1)=1, L(2)=3 and L(n)=L(n-1)+L(n-2) ; n>2. 
	Write a recursive algorithm to find nth Lucas number.
*/

#include <stdio.h>

int lucas(int n)
{
	if(n==1)
		return 1;
	else if(n==2)
		return 3;
	else
		return(lucas(n-1)+lucas(n-2));
}
int main()
{
	int n, i;
	printf("Enter n: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		printf("%d\n", lucas(i));
	}
}
