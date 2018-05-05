#include <stdio.h>

int main() {
	int arr[]={4, 15, 2, 9, 20, 11, 13};
	int length=7;
	for(int i=0; i<length; i++) {
		int flag=0;
		for(int j=i+1; j<length; j++) {
			if(arr[i]<arr[j]) {
				printf("%d -> %d\n", arr[i], arr[j]);
				flag=1;
				break;
			}
		}
		if(!flag)
			printf("%d -> %d\n", arr[i], -1);
		}
	return 0;
}
