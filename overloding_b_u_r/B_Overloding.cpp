#include <iostream>
using namespace std;
class Coord
{
    int x, y;

public:
    Coord()
    {
        x = 0;
        y = 0;
    }
    Coord(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "(X,Y) = " << "(" << x << "," << y << ")" << endl;
    }
    Coord operator+(Coord c)
    {
        Coord temp;
        temp.x = x + c.x;
        temp.y = y + c.y;
        return temp;
    }
    bool operator==(Coord c)
    {
        if (x == c.x && y == c.y)
            return true;
        else
            return false;
    }

    bool operator&&(Coord c)
    {
        if (x && c.x && y && c.y)
            return true;
        else
            return false;
    }
};
int main()
{
    Coord c1(2, 3), c2(4, 5), c3;
    c3 = c1 + c2;
    c1.display();
    c2.display();
    c3.display();
    if (c1 == c2)
    {
        cout << "c1 and c2 are equal." << endl;
    }
    else
    {
        cout << "c1 and c2 are not equal." << endl;
    }
    if (c1 && c3)
    {
        cout << "c3 and c1 are equal." << endl;
    }
    else
    {
        cout << "C3 and C1 are not equal " << endl;
    }
}