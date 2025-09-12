#include <iostream>
using namespace std;

int main()
{
    int a = 10, b;
    cout << "Enter a divisor: ";
    cin >> b;

    try
    {

        cout << "Result: " << a / b << endl;
    }
    catch (exception& e)
    {
        cout << "Standard exception caught: " <<e.what() << endl;
    }
    cout << "Program continues after exception handling." << endl;

    return 0;
}
