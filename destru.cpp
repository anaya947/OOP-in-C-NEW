#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;

public:
    // Constructor
    Student(string n, int r)
    {
        name = n;
        rollNo = r;
        cout << "Constructor called for " << name << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor called for " << name << endl;
    }

    void display()
    {
        cout << "Name: " << name << ", Roll No: " << rollNo << endl;
    }
};

int main()
{
    Student s1("Alice", 5);
    s1.display();

    {
        Student s2("Bob", 2);
        s2.display();
    } // s2 goes out of scope here → Destructor runs

    return 0; // s1 goes out of scope here → Destructor runs
}
