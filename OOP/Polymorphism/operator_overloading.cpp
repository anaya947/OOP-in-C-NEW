#include <iostream>
using namespace std;

class Complex
{
public:
    int real, imag;
    Complex()
    {
        real = 0;
        imag = 0;
    }

    // Constructor to initialize complex number
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    // Overload the + operator
    Complex operator+(Complex other)
    {
        Complex result;
        result.real = real + other.real; // Add real parts
        result.imag = imag + other.imag; // Add imaginary parts
        return result;                   // Return the new complex number
    }
    void display()
    {
        cout << real << " + " << imag << "i" << endl; // Display the complex number
    }
};

int main()
{
    Complex c1(4, 2); // Create first complex number 3 + 2i
    Complex c2(1, 7); // Create second complex number 1 + 7i

    // Use the overloaded + operator to add two complex numbers
    Complex c3;
    c3 = c1 + c2; // This will call the operator+ function

    c3.display(); // Display the result using the display method

    return 0;
}
