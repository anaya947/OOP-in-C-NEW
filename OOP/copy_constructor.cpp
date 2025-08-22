#include<iostream>
using namespace std;
class Point {
public:
    int x, y;

    // Default constructor
    // Point() : x(0), y(0) {}

    // Parameterized constructor
    Point(int n, int m)
    {
        this->x = n;
        this->y = m;
        cout << "Parameterized constructor called." << endl;
    }

    // Copy constructor
    Point(Point &p) {
        x = p.x;
        y = p.y;
        cout << "Copy constructor called." << endl;
    }

    // Method to display point coordinates
    void display() {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};
int main() {
    // Create a Point object using the parameterized constructor
    Point p1(10, 20);
    cout << "Original Point: ";
    p1.display();

    // Create a Point object using the copy constructor
    Point p2 = p1; // This will invoke the copy constructor
    cout << "Copied Point: ";
    p2.display();

    return 0;
}