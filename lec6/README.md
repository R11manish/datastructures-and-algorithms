# Lecture 6 - Feb 4, Mon
- Avoiding dangling pointers during object deletion.
``` C++
int main() {
	int x = 3;
	Data *s = new Data(x);
	delete s;
	s = NULL;
}
```
- It's good practice to not define functions inside a Class, however, you can define it inline. When you define it inline, each object has its own copy of this function. On the other hand, external methods are shared. So if you're method is one line, go ahead and make it inline. Below is the reason to why inline functions have more than one copy.
	- `this` is a data pointer that gets automatically created when you create an object. 
	- `method_table` points to a table of function pointers.
- Valgrind is a tool to check memory usage.
- For every `new` have a `delete`.
- Do not initialise value to an uninitialised value.
- There are two forms of delete. When you're deleting an array, it's `delete[] x` and when it's a single object, `delete`.
- A string in C is an array of characters.
- The `<string>` library is different from `<cstring>` library. 
- Add two strings. It is also index accessible.
``` C++
string str("A character sequence");
str = str + "Hello";
str += "Goodbye";
if(str == cstr) { // Operator overloading.
	// Test for equality.
}
string strB = "Hello"; It is legal, still calling the constructor though.
```
- Operator Overloading
``` C++
class String{
	char c_str[100];
	public:
		string & operator =(char * str) {
			string s = strcat(c_str, str);
			return (s);
		}
		string & operator +(char * str) {
			strcpy(c_str, str);
			return (*this);
		}

}

string strB.operator= "Hello";
```
- Operator `<<` & `>>` overloaded in `cout` and `cin`.
- You can operator overload with respect to the type of data you're working with too.
- Other libraries - `ostream`, `istream`, `fstream`
	- `fstream` - `ifstream`, `ofstream`
- File Handling
```
#include <fstream> 
int main() {
	ofstream myfile;
	myfile.open("Test.txt", fstream::app);
	myfile<<"Hello\n"<<endl;
	myfile.close();
}
```