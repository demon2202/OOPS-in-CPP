#include <iostream> 
using namespace std; 
class Complex { 
private: 
	int real, imag; 
public: 
	Complex(int r = 0, int i = 0) 
	{ 
		real = r; 
		imag = i; 
	} 

	Complex operator+(Complex const& obj) 
	{ 
		Complex res; 
		res.real = real + obj.real; 
		res.imag = imag + obj.imag; 
		return res; 
	} 
	void print() { cout << real << " + " << imag << "i\n"; } 
}; 

int main() 
{ 
	Complex c1(15, 5), c2(3, 5); 

	Complex c3 = c1 + c2; 
	c3.print(); 
}
