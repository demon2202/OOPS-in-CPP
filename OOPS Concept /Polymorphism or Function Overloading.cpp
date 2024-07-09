#include <iostream> 

using namespace std; 

class Geeks { 
public: 
	void func(int x) 
	{ 
		cout << "value of x is " << x << endl; 
	} 

	void func(double x) 
	{ 
		cout << "value of x is " << x << endl; 
	} 

	void func(int x, int y) 
	{ 
		cout << "value of x and y is " << x << ", " << y 
			<< endl; 
	} 
}; 

int main() 
{ 
	Geeks obj1; 
 
	obj1.func(10); 


	obj1.func(5.321); 

	obj1.func(94, 32); 
	return 0; 
}
