# Heaps - Mar 25, Mon
- How to heapify? 
- Using algorithm called sift-down, go through each node, take that value, and put it in the right place.
- (size-2)/2 : essentially cut half of the data.
``` c++
void siftdown(int i, std::vector<int> list) {
	while(!isLeaf(i)) {
		int n = left(i);
		if(n+1 < list.size() && list[n]<list[n+1]) {
			r = right[i];
		}
		if(list[i]>list[n]) return;
		else {
			swap(list[i], list[n]);
		}
		i = n;
	}
}
```