#include <stdio.h>

int main() {
	int arr[10]={13, 44, 25, 49, 75, 91, 56, 72};
	int length=8, k=100;
	for(int i=0; i<8; i++) {
		for(int j=i+1; j<8; j++) {
			if(arr[i]+arr[j]==k) {
				printf("The two numbers are %d and %d\n", arr[i], arr[j]);
				return 0;
			}
		}
	}
	printf("No such elements in the array exist.\n");
	return 0;
}
