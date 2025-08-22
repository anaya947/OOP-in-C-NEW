#include <iostream>
#include <string>
using namespace std;

// Base Class
class Person
{
public:
    string name;
    int age;

    // Parameterized Constructor
    Person(string n, int a)
    {
        name = n;
        age = a;
        cout << "Person constructor called" << endl;
    }
};

// Derived Class: Student
class Student : public Person
{
public:
    string studentID;
    string department;

    // Parameterized Constructor using initialization list
    Student(string n, int a, string id, string dept): Person(n, a)
    {
        studentID = id;
        department = dept;
        cout << "Student constructor called" << endl;
    }

    void displayInfo()
    {
        cout << "\nStudent Info:\n";
        cout << "Name: " << name << "\nAge: " << age << "\nStudent ID: " << studentID << "\nDepartment: " << department << endl;
    }
};

// Derived Class: Teacher
class Teacher : public Person
{
public:
    string teacherID;
    string subject;

    // Parameterized Constructor using initialization list
    Teacher(string n, int a, string id, string sub)
        : Person(n, a)
    {
        teacherID = id;
        subject = sub;
        cout << "Teacher constructor called" << endl;
    }

    void displayInfo()
    {
        cout << "\nTeacher Info:\n";
        cout << "Name: " << name << "\nAge: " << age << "\nTeacher ID: " << teacherID << "\nSubject: " << subject << endl;
    }
};

int main()
{
    // Creating Student object
    Student s1("Jannatul", 19, "S123", "Computer Engineering");
     s1.displayInfo();

    // Creating Teacher object
    Teacher t1("Mr. Karim", 45, "T001", "OOP");
    t1.displayInfo();

    return 0;
}
