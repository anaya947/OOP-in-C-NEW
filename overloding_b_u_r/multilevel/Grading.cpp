#include <iostream>
using namespace std;
class Person
{
protected:
    string student_name;
    int ID;

public:
    void input_person_details()
    {
        cout << "Enter the student name and ID : " << endl;
        cin >> student_name >> ID;
    }
    void display()
    {
        cout << "Student name : " << student_name << endl;
        cout << "ID : " << ID << endl;
    }
};
class Student : public Person
{
protected:
    double marks[3];

public:
    void input_marks()
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> marks[i];
        }
    }
    double total_marks = 0;
    double calculate_total_marks()
    {

        for (int i = 0; i < 3; i++)
        {
            total_marks = total_marks + marks[i];
        }
        return total_marks;
    }
};

class Result : public Student
{
protected:
    char grade;

public:
    void calculate_grade()
    {
        if (total_marks >= 240)
        {
            grade = 'A';
            cout << "Grade = " << grade << endl;
        }
        else if (total_marks >= 180 && total_marks <= 239)
        {
            grade = 'B';
            cout << "Grade = " << grade << endl;
        }
        else if (total_marks >= 120 && total_marks <= 179)
        {
            grade = 'C';
            cout << "Grade = " << grade << endl;
        }
        else if (total_marks < 120)
        {
            grade = 'F';
            cout << "Grade = " << grade << endl;
        }
        else
            cout << "Invalid marks of grade!" << endl;
    }
};
int main()
{;
    Result r;
    r.input_person_details();
    r.display();
    r.input_marks();
    double t = r.calculate_total_marks();
    cout << "Total marks : " << t << endl;
    r.calculate_grade();
}