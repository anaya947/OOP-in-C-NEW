#include <iostream>
using namespace std;

// Base class (Parent)
class Animal
{
public:
    void eat()
    {
        cout << "This animal eats food." << endl;
    }
    int age; // Example of a member variable
    void sleep()
    {
        cout << "This animal sleeps." << endl;
    }

protected:
    int password=87;

};

// Derived class (Child)
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "The dog barks." << endl;
    }
    void showPassword()
    {
        // Accessing the protected member from the base class
        cout << "The password is: " << password << endl;
    }
};
class Cat : public Animal
{
public:
    void meow()
    {
        cout << "The cat meows." << endl;
    }
};

int main()
{
    
  Dog d;
  d.showPassword();  

  

    return 0;
}
