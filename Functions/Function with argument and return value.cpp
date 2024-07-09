#include<iostream>
using namespace std;

int sqr(int);

int main()

{

int a,ans;

cout<<"enter a number";

cin>>a;

ans=sqr(a);

cout<<"square of number is"<<ans;

return 0;

}
int sqr(int X)

{

return(X*X);

}
