#include <iostream>
using namespace std;
class coord
{
    int x, y;

public:
    coord()
    {
        x = 0;
        y = 0;
    }
    coord(int i, int j)
    {
        x = i;
        y = j;
    }

    void display()
    {
        cout << "X: " << x << " Y: " << y << endl;
    } 

    coord operator+(coord ob2)
    {
        coord temp;
        temp.x = x + ob2.x;
        temp.y = y + ob2.y;
        return temp;
    }

    coord operator-(coord ob2)
    {
        coord temp;
        temp.x = x - ob2.x;
        temp.y = y - ob2.y;
        return temp;
    }

    // coord operator=(coord ob2)
    // {
    //     x = ob2.x;
    //     y = ob2.y;
    //     return *this;
    // }
    
    void operator=(coord ob2)
{
    x = ob2.x;
    y = ob2.y;
}

};
int main()
{
    coord A(5, 10), B(3, 6), C;
    C = A + B; // adding two objects
    cout << "After adding A and B: ";
    C.display();

    C = A - B; // subtracting two objects
    cout << "After subtracting A and B: ";
    C.display();

    C = A; // assigning one object to another
    cout << "After assigning A to C: ";
    C.display();
    return 0;
}
