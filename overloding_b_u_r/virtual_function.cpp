#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw() = 0; 
    virtual double Calculate_Area() = 0; 
};

class Circle : public Shape
{
private:
    double radius;
public:
    Circle() : radius(0.0) {}
    Circle(double r) : radius(r) {}

    void draw()
    {
        cout << "Drawing a Circle." << endl;
    }

    double Calculate_Area()
    {
        return 3.1416 * radius * radius;
    }
};

class Square : public Shape
{
private:
    double side;
public:
    Square() : side(0.0) {}
    Square(double s) : side(s) {}

    void draw()
    {
        cout << "Drawing a Square." << endl;
    }

    double Calculate_Area()
    {
        return side * side;
    }
};

class Triangle : public Shape
{
private:
    double base, height;
public:
    Triangle() : base(0.0), height(0.0) {}
    Triangle(double b, double h) : base(b), height(h) {}

    void draw()
    {
        cout << "Drawing a Triangle." << endl;
    }

    double Calculate_Area()
    {
        return 0.5 * base * height;
    }
};

int main()
{
    Shape* shape; // base class pointer

    Circle c(4);
    shape = &c;
    shape->draw();
    cout << "Circle Area: " << shape->Calculate_Area() << endl;

    Square s(2.0);
    shape = &s;
    shape->draw();
    cout << "Square Area: " << shape->Calculate_Area() << endl;

    Triangle t(2.0, 4.0);
    shape = &t;
    shape->draw();
    cout << "Triangle Area: " << shape->Calculate_Area() << endl;

    return 0;
}

