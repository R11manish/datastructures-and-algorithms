#include <iostream>
#include <stdlib.h>
using namespace std;

void sort(int arr[], int size) 
{
	for(int k=1; k<size; k++)
	{
		int key=arr[k];
		int j=k-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1] = arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
}

void display(int arr[], int size)
{
	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int size;
	cout<<"Enter the size of your array: ";
	cin>>size;
	int arr[size];
	cout<<"\nEnter the contents of the array: ";
	for(int i=0; i<size; i++)
		cin>>arr[i];
	sort(arr, size);
	display(arr, size);
	return 0;
}