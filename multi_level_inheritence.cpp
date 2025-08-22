#include <iostream>
using namespace std;
class A
{
public:
int b;
    float area(float r)
    {
        float area = 3.1416 * r * r;
        return area;
    }
};
class B : public A
{
public:
    void display()
    {
        cout << "This is class B." << endl;
    }
};
class C : public B
{
public:
    void show()
    {
        cout << "This is class C." << endl;
    }
};
int main()
{
    C objc;
    float radius;
    cout << "enter a radius:" << endl;
    cin >> radius;
    float area = objc.area(radius);
    cout << "The area is " << area << endl;
    // float area=objc.area(2.0);
    // cout<<"The area is " << area << endl;
    objc.display();

    objc.b= 10; // Accessing member variable from class A
    cout << "Value of b from class A: " << objc.b << endl;
}