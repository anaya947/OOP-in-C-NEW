#include <iostream>
using namespace std;
int main()
{
    double num1, num2;
    char op;
    cout << "Please enter num1:" << endl;
    cin >> num1;
    cout << "Please enter num2:" << endl;
    cin >> num2;
    cout << "Please enter operator(+,-,*,/):" << endl;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << num1 + num2 << endl;
        break;

    case '-':
        cout << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 * num2 << endl;
        break;
    case '/':
        if (num2 == 0)
        {
            cout << "Error: Division by zero is not allowed." << endl;
            return 1; // Exit the program with an error code
        }
        else{
            cout << num1 / num2 << endl;
        }
        break;
    default:
        cout << "Invalid operator" << endl;
        break;
    }

    return 0;
}