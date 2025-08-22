#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    int age = 5;

    void sleep() {
        cout << "Animal sleeps." << endl;
    }

    virtual void makeSound() {
        cout << "Some generic animal sound." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks loudly." << endl;
    }

    // Override the virtual function
    void makeSound() override {
        cout << "Dog says Woof!" << endl;
    }

    // Also, call base class version
    void callBaseSound() {
        Animal::makeSound();  // Call base class version explicitly
    }
};

int main() {
    Dog d;

    // // Calling derived class method
    // d.bark();           // Output: Dog barks loudly.

    // // Calling overridden method (Dog version)
    // d.makeSound();      // Output: Dog says Woof!

    // // Calling base class method directly (not overridden)
    // d.sleep();          // Output: Animal sleeps.

    // // Accessing base class variable
    // cout << "Dog's age: " << d.age << endl;  // Output: Dog's age: 5

    // // Explicitly calling base class version of makeSound()
    // d.callBaseSound();  // Output: Some generic animal sound.
    d.makeSound(); 
    d.callBaseSound();  // Output: Some generic animal sound.

    return 0;
}
