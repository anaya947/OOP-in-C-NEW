#include <iostream>
using namespace std;

class Vector
{
private:
    int x, y;

public:
    Vector()
    {
        x = 0;
        y = 0;
    }
    Vector(int a, int b)
    {
        x = a;
        y = b;
    }

    Vector operator+(Vector v)
    {
        Vector temp;
        temp.x = x + v.x;
        temp.y = y + v.y;
        return temp;
    }

    Vector operator-(Vector v)
    {
        Vector temp;
        temp.x = x - v.x;
        temp.y = y - v.y;
        return temp;
    }

    bool operator==(Vector v)
    {
        return (x == v.x && y == v.y);
    }

    Vector operator-() // negation
    {
        x = -x;
        y = -y;
        return (*this);
    }

    friend int operator*(Vector v1, Vector v2); // ✅ two parameters

void display()
{
    cout << x << "i";
    if (y >= 0)
        cout << "+" << y << "j";
    else
        cout << y << "j"; // y already has a '-' sign
    cout << endl;
}

};

// ✅ Friend function (dot product)
int operator*(Vector v1, Vector v2)
{
    return (v1.x * v2.x + v1.y * v2.y);
}

int main()
{
    Vector v1(2, 3), v2(5, 6), v3;
      cout << "Dot product of v1 and v2: " << (v1 * v2) << endl;

    v3 = v1 + v2;
    cout << "Summation of vectors: ";
    v3.display();

    v3 = v1 - v2;
    cout << "Subtraction of vectors: ";
    v3.display();

    if (v1 == v2)
        cout << "Vectors are equal!" << endl;
    else
        cout << "Vectors are not equal!" << endl;

    cout << "Negation of v1: ";
    -v1;
    v1.display();

  

    return 0;
}
