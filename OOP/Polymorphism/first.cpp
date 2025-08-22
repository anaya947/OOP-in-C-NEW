#include <iostream>
using namespace std;

class Geeks
{
public:
    // Function to add two integers
    void add(int a)
    {
        cout << "Integer Sum = " << a << endl;
    }

    // Function to add two floating point values
    void add(double a, int b)
    {
        cout << "Float Sum = " << a + b<< endl;
    }
    void add(void)
    {
        cout << "No arguments passed." << endl;
    }
};

int main()
{
    Geeks gfg;

    // add() called with int values
    gfg.add();
    gfg.add(5, 6);

    // // add() called with double value
    // gfg.add(5.3, 6.2);

    return 0;
}