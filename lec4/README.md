# Lecture 4 - Jan 30, Wed
- Header files are never compiled, they are always included/linked to the executable. 
- We need to put include guards when you have multiple includes of the same library across different header files.
- Never ever include a `.cpp` file. The driver files will test for include guards.
- C++ has a form of automatic memory management and garbage collection built in. 
- Support for name collisions in C++.
- C++ adds this concept called namespaces. Everything in C is wrapped in the namespace called 'std'. `cout` and `cin` are standard objects for system i/o.
- Mechanism for unwrapping namespaces using `using`. From being within a global namespace, you switch to the `std` namespace.
```
using namespace std;
```
By doing this, you can no longer have objects that are named `cout` and `cin`. You can have more than one namespaces unwrapped. This is part of the pre-compilation part.
- User defined type in c is a `struct`.
```
struct Data {
	int x;
	char c;
};
```
You can add methods to `structs` using function pointers.
- C -> C++
```
class Data {
	// If there are no access specifiers, it defaults to `private`.
	private:
		int x;
		char c;
	public:
		double y;
	private:
		float f;
	protected:
		int f;
}; // need that semicolon.
```
- `Segmentation Fault` lives!
- `new` returns a pointer and allocates the right amount space during object creation.
``` C++
int main() {
	foo();
	Data *x = new Data();
	cout<< *x->y <<endl;
}
```
- Adding methods to the class. They need to declared outside of header files.
``` C++
class Data {
	// If there are no access specifiers, it defaults to `private`.
	private:
		int x;
		char c;
	public:
		double y;
		void foo();
	private:
		float f;
	protected:
		int f;
}; // need that semicolon.
```
- In order to write definition of a method belonging to a class, 
``` C++
void Data::foo() {}
```
