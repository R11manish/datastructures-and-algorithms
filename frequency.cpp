#include <stdio.h>

struct item {
	int number;
	int frequency;
};

int frequency(int arr[], int length, int element) {
int count=0;
	for(int i=0; i<length; i++) {
		if(arr[i]==element) {
			count++;
			arr[i]=-1;
		}
	}
	return count;
}

int main() {
	int arr[10] = {2, 3, 4, 2, 8, 1, 1, 2};
	int length=8, size=0;
	item item[length];
	for(int i=0; i<length; i++) {
		if(arr[i]>0) {
			item[size].number=arr[i];
			item[size].frequency=frequency(arr, length, arr[i]);
			size++;
		}
	}
	for(int j=0; j<size; j++) {
		for(int k=j+1; k<size; k++) {
			if(item[j].frequency<item[k].frequency) {
				int tempn=item[j].number;
				int tempf=item[j].frequency;
				item[j].number=item[k].number;
				item[j].frequency=item[k].frequency;
				item[k].number=tempn;
				item[k].frequency=tempf;
			}
		}
	}
	for(int l=0; l<size; l++) {
		for(int m=0; m<item[l].frequency; m++) {
			printf("%d ", item[l].number);
		}
	}
	return 0;
}
