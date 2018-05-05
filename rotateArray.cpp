#include <stdio.h>

void rightShift(int arr[], int length) {
	int carry=arr[length-1];
	for(int i=length; i>=1; i--) {
		arr[i]=arr[i-1];
	}
	arr[0]=carry;
}

void display(int arr[], int length) {
	for(int i=0; i<length; i++) {
		printf("%d ", arr[i]);
	}
}

int main() {
	int arr[100]={13, 44, 25, 49, 75, 91, 56, 72};	
	int length=8;
	int iterations=3;
	for(int i=0; i<iterations; i++) {
		rightShift(arr, length);
	}
	display(arr, length);
	return 0;
}
