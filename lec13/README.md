# Lecture 13 - Feb 18, Mon
- Follow up, two iterator solution. Time - O(n), Memory - O(1)
	1. Slow, Fast1, Fast2 points to the head of the list.
	2. Fast1=Fast2->next;
	3. Fast2=Fast1->next;
	4. Check if Slow = Fast1 and Fast2?
		4.1 If false, go to 2.
		4.2 If true, cycle found.
	5. If Fast1 and Fast2 == NULL, it's a well formed list.
- 
``` C++
bool wellformed(const List &l) {
	Node * slow = l.head, *fast1=l.head, *fast2 = l.head;
	fast2 = fast1->next;
	while(slow && fast1 = fast2->next && fast2 = fast1->next) {
		if(slow == fast1 || slow == fast2) {
			return false;
		}
		slow = slow->next;
	}
	return true;
}
```
#### Secondary ADTs
- group/collect items by type.
- insertion order
- access restrictions

##### Stacks
- LIFO, Last in, first out
- Push, Pop
- Peek (return the top), Clear (deletes everything)
- Two ways to implement, Lists and Vectors (Array)
``` C++
class Stack {
	List l;
	public:
		void push(int num);
		int pop();
		int peek();
		void clear();
};

int main() {

}
```
- Waste of time deleting the popped element since popped element will be overwritten anyway.
- Implementation for arrays.
``` C++
class Stack {
	List l;
	public:
		void push(int num);
		int pop();
		int peek(){return array[top-1];}
		void clear();
};

int main() {

}
```
##### Queues
- FIFO, First in, First out.
- Enqueueueueueueu, Dequeue.
