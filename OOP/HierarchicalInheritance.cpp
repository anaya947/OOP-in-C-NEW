#include <iostream>
using namespace std;

class Animal {
public:
    void breathe() {
        cout << "Animal breathes." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal {
public:
    void meow() {
        cout << "Cat meows." << endl;
    }
};

int main() {
    Dog d;
    Cat c;
    d.breathe();
    c.meow();
    c.breathe();


    return 0;
}
