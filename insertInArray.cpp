#include <stdio.h>

void insertBeg(int arr[], int element, int *length) {
	for(int i=*length; i>=0; i--) {
		arr[i+1]=arr[i];
	}
	arr[0]=element;
	*length+=1;
}

void insertMid(int arr[], int element, int *length) {
	int middle;
	if(*length%2==0) {
		middle=*length/2;
	}
	else {
		middle=(*length+1)/2;
	}
	for(int i=*length; i>=middle; i--) {
		arr[i+1]=arr[i];
	}
	arr[middle]=element;
	*length+=1;
}

void display(int arr[], int length) {
	for(int i=0; i<length; i++) {
		printf("%d ", arr[i]);
	}
}

int main() {
	int arr[100]={13, 44, 25, 49, 75, 91, 56, 72};	
	int length=8, choice, element;
	display(arr, length);
	printf("\n1)Insert in the beginning \n2)Insert in the middle\n");
	scanf("%d", &choice);
	printf("Element to insert: ");
	scanf("%d", &element);
	if(choice==1) {
		insertBeg(arr, element, &length);
	}
	else if(choice==2) {
		insertMid(arr, element, &length);
	}
	else {
		printf("\nInvalid choice!");
	}
	display(arr, length);
	return 0;
}
