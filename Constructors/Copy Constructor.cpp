#include <iostream>
using namespace std;
class abc
{
int a, b; public:
abc(int x, int y)
{
a = x; b = y;
}
abc(abc &p)
{
a = p.a;
b = p.b;
}
void showdata()
{
cout << a << " " << b <<
endl;
}
};
int main()
{
abc c1(10, 20);
abc c2(c1);
c1.showdata();
c2.showdata();
}
