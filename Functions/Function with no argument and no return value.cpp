//Program to print square of a number using functions.

#include<iostream>

using namespace std;

void sqr(void); //function prototype

int main()

{

sqr(); //function calling

}

void sqr() //function definition

{//function body starts

int no;

cout<<"Enter a no.::";

cin>>no;

cout<<"Square of "<<no<<" is ::"<<no*no;

}
