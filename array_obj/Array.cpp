#include <iostream>
using namespace std;
class Array
{
private:
    int a;

public:
    void setA(int x)
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
    Array ob[3];
    int y;
    for (int i = 0; i < 3; i++)
    {
        
        cout << "Enter the value of a :";
        cin >> y;
        ob[i].setA(y);
    }
    for (int i = 0; i < 3; i++)
    {
        cout << ob[i].getA() << endl;
    }
}