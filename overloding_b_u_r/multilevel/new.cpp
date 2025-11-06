// Create a C++ program demonstrating multilevel inheritance with three classes: Shape,
// Circle, and Cylinder. The Shape class contains a method to input the radius. The Circle
// class, which inherits from Shape, adds a method to calculate and display the area of the
// circle. The Cylinder class, which inherits from Circle, adds methods to calculate and
// display the cylinder’s volume and surface area using the same radius and an additional
// height. In the main() function, create a Cylinder object, set all attributes, and display the
// radius, circle area, cylinder volume, and surface area.

#include <iostream>
using namespace std;
class Shap
{
protected:
    double radius;

public:
    void input_radius(double r)
    {
        radius = r;
    }
};
class Circle : public Shap
{
public:
    double area;
    double Circle_Area()
    {
        area = 3.1416 * radius * radius;
        return area;
    }
    void display()
    {
        cout << "The area of Circle is : " << area << endl;
    }
};

class Cylinder : public Circle
{
public:
    double height;
    double area;
    double volume;

    double Calculate_Volume(double h)
    {
        volume = 3.1416 * radius * radius * h;
        return volume;
    }

    double Calculate_Cylinder_Area(double H)
    {
        area = (2 * 3.1416 * radius * H) + (2 * 3.1416 * radius * radius);
        return area;
    }
    void display_Cylinder_Info()
    {
        cout << "The area of cylinder is : " << area << " and the volume is : " << volume << endl;
    }
};
int main()
{
    double R, Height;
    cout << "Enter a radius  and Height : " << endl;
    cin >> R >> Height;
    Circle c;
    c.input_radius(R);
    c.Circle_Area();
    c.display();

    Cylinder cylinder;
    cylinder.input_radius(R);
    cylinder.Calculate_Cylinder_Area(Height);
    cylinder.Calculate_Volume(Height);
    cylinder.display_Cylinder_Info();
}