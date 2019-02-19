# Lecture 12 - Feb 15, Fri
- Setting b to a, return a, a gets the destructor called. 
``` C++
class Data {
	int * nums;
	public:
		Data() {
			nums = new int[5];
		}
		~Data() {
			delete[] nums;
		}
	}
};

Data exampleFunction() {
	Data a;
	Data b = a;
	return a;
}

int main() {
	exampleFunction();
}
```
-
``` C++
class Linked {
	Linked(const Linked& other) {
		if(wellformed((other))) {
			for(Node * node; node = other.get(); other.next()) {
				this->insert(node.data);
			}
		}
	}
}
```