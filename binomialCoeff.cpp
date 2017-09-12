/*
	Program to find the the binomial coefficient using recursion.
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int binom(int n, int k)
{
	if(n==k || k==0)
		return 1;
	else
		return (binom(n-1, k) + binom(n-1, k-1));
}

int main()
{
	int n, k;
	cout<<"Enter n and k in nCk: ";
	cin>>n>>k;
	int answer = binom(n, k);
	cout<<"Answer: "<<answer;
}
