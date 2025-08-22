#include <iostream>
using namespace std;

// Base class (Parent)
class MyClass
{
    int a;

public:
    MyClass(int value);
    int get();
};
MyClass ::MyClass(int value)
{
    a = value;
}
int MyClass::get()
{
    return a;
}
int main()
{
    int x;
    cout << "Enter the value :" << endl;
    cin >> x;
    MyClass m(x);
    cout << "The value is : " << m.get() << endl;

    MyClass *p;
    p = &m;
    cout<<p<<endl;
    cout << "using pointer " << p->get() << endl;
}