#include <iostream>
using namespace std;
class Array
{
private:
    int a;

public:
    Array() // Default constructor
    {
        a = 0;
    }
    Array(int x)
    {
        a = x;
    }

    int getA()
    {
        return a;
    }
};
int main()
{
    int y;
    Array ob[3];
    for (int i = 0; i < 3; i++)
    {

        cout << "Enter the value of a :";
        cin >> y;

        ob[i] = Array(y); // Correct way to assign value to the object
    }
    for (int i = 0; i < 3; i++)
    {
        cout << ob[i].getA() << endl;
    }
}