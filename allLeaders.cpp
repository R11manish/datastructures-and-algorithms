#include <stdio.h>

int main() {
	int arr[]={6, 7, 4, 3, 5, 2};
	int length=6;
	int max=arr[length-1];
	for(int i=length-1; i>-0; i--) {
		if (arr[i]>max) {
			max=arr[i];
			printf("%d ", arr[i]);
		}
	}
	printf("%d\n", arr[length-1]);
	return 0;
}
