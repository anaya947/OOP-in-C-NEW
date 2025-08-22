#include <iostream>
using namespace std;

// Base class 1
class Person
{
public:
    void setName(string n)
    {
        name = n;
    }
    void showName()
    {
        cout << "Name: " << name << endl;
    }

private:
    string name;
};

// Base class 2
class Employee
{
public:
    void setID(int i)
    {
        id = i;
    }
    void showID()
    {
        cout << "Employee ID: " << id << endl;
    }

private:
    int id;
};
class Director
{
public:
    int X; // Example member variable
    void showX()
    {
        cout << "Director X: " << X << endl;
    }
};

// Derived class
class Manager : public Person, public Employee, public Director
{
public:
    void manage()
    {
        cout << "Manager is managing the team." << endl;
    }
};

int main()
{
    Manager m;
    m.setName("Jannatul Ferdous");
    m.setID(101);
    m.showName();
    m.showID();
    m.manage();
    m.X = 42; // Setting value for Director's member variable
    m.showX();
    return 0;
}
