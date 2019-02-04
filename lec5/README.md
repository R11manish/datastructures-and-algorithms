# Lecture 5 - Feb 1, Fri
- When you don't use `new` the variables are put on the stack. If you put it on the stack, you don't have to worry about memory problems. 
- `new` is just a fancy `malloc` and it allocates variables on the heap. It returns a pointer.
- Java returns a reference while in C++ it returns a pointer to the said object. 
- The heap is user managed.
- We use a scope operator `::` to access something from a specific namespace. Free functions exist in a global namespace.
- Whenever you create a class, you have access to the object with the `this` keyword.
``` C++
// Constructor. C++ implements a default constructor if a constructor is not defined by the programmer.
Data::Data() {
	this->num = 5;
}
```
- Value Constructor (?)
- Destructor, a blueprint of how to tear this object apart and free space. Interesting, `~` is not an operator.
``` C++
~Data();
```
- Memory leaks occur when you destruct an object without destructing the contents it may be pointing to.
``` C++
Data::~Data() {
	delete num;
}
```
As soon as something goes out of scope, the the destructor is called. You never explicitly call a destructor
- To note
``` C++
int * ptr, num; // ptr is a pointer, num is an integer.
int * ptr, *num; // ptr is a pointer, num is also a pointer.
```
- Compilers in mac return `0x0` for null pointers. You can't just use null, you would have to include the library `<cstdlib>`. Always set your pointers to some value first.
- What does a pointer actually contain? It contains a reference to some data. Reference here would be an address to that location. Memory is byte addressable. Address 0x0000 is always, regardless of whatsoever, zero. 
- During a pointer dereference, compilers refer to the type to figure out how much bytes to look at.
- The name of an array is a pointer. You can use that pointer as if it were an array. A pointer is always 8 bytes, and it doesn't allocate memory, while an array allocates memory. Pointers are just the address.
- One big difference between C++ and C, is that in C you can only pass by value.

``` C++
void pointer(int num) {
	num+=5;
}

int main() {
	int list[10];
	int *ptr = list;
	*ptr = 1;
	pointer(ptr);
}
```
-
``` C++
\#if 1
	char ch = 'c', t;
	char * chptr = &ch;
	t = *chptr;
	cout << t << endl;
\#endif
```
#### Inheritance
- To inherit from another class, you'd have to mention the access specifier.
- Anything that's private is not inherited.
``` C++
class Data: private A {
	int *num;
} // All the stuff inherited from A is going to have a private scope from class Data.
```

