# Lecture 8 - Feb 8, Fri
##### Dynamic Arrays
- Different implementations in different languages
	- Java, ArrayList
	- C++, Vector
	- Python, List
- Say {1, 2, 3, 4}. To insert something in between, you would have to copy the array over to another array and then do the implemetation. The cost here is both time and memory. 
- Growth Rate. 
- Time complexity in terms of Big O. There are two elements we're looking at, time and memory. You can use less memory if use more time, or vice versa.
- We'll look at these in terms of:
	- input size
	- number of operations
- Memory complexity of example is size+2. Time complexity is 3n+2.
``` C++
int largest(int A[], int size) {	// Position of largest element seen for each element
	int currlarge = 0;				
	for(int i=0; i<size; i++) {		// For each element
		if(A[currlarge] < A[i]) {	// if A[i] is larger
			currlarge = i;			// Remember its position
		}
	}
	return A[currlarge];			/ Return largest position
}

int main() {
	int nums={1, 2, 3, 4, 5, 6, 7, 8, 9};
	cout<<largest(nums, sizeof(nums)/sizeof(int))<<endl;
}
```
- Routine example, c=time of operation, O(n)=6c. If graphed, this has linear growth. Difference between two operations are negligible, so we're about how time adds up.
- Bogo Sort (?) Average cast is n!. Worst case is infinity.
- String is a double pointer.
