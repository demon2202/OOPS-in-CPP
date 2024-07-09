#include <iostream> 
using namespace std; 

class Encapsulation { 
private: 
	int x; 

public: 
	
	void setter(int a) { x = a; } 

	int getter() { return x; } 
}; 

int main() 
{ 
	Encapsulation obj; 

	obj.setter(13); 

	cout << obj.getter(); 

	return 0; 
}
