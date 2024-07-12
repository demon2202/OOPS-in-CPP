class Student
{
public:
int stId;
int stAge;
string stName;
// In this function we returning the student object
Student input(int n, int a, string s)
{
Student obj:
obj.stId = n;
obj.stAge = a;
obj.stName = s;
return obj;
}
// In this function we pass object as an argument
void display()
{
cout << "Name = " << obj.stName << endl;
cout << "Id = " << obj.stId << endl;
cout << "Age = " << obj.stAge << endl;}};
int main()
{
Student s, s1;
s1 = s.input (1005, 20, “James”);
s.display();
s1.display();
return 0;
}

