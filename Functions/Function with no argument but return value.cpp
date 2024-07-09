//Program to add two numbers using functions

#include<iostream>
using namespace std;

int add(void);

int main()

{

int z;

z=add();

cout<<"sum of 2 numbers is"<<z;


return 0;

}
int add(void)

{

int a,b;

cout<<"enter 2 numbers::";

cin>>a>>b;

return(a+b);

}
