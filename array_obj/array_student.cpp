#include <iostream>
#include <string>
using namespace std;
class Student
{
    int roll;
    string name;
    double GPA;

public:
    void set_value(int r, string n, double gpa)
    {
        roll = r;
        name = n;
        GPA = gpa;
    }
    void display()
    {
        cout << "Roll : " << roll << " " << "Name : " << name << " " << "GPA:" << GPA << " " << endl;
    }
    int getRoll()
    {
        return roll;
    }
};
int main()
{
    int roll;
    string name;
    double GPA;
    int stdn_number;
    cout << "Enter the number of students : " << endl;
    cin >> stdn_number;
    Student student[stdn_number];
    for (int i = 0; i < stdn_number; i++)
    {
        cout << "Enter details for student : " << i + 1 << endl;
        cout << "Enter your roll:";
        cin >> roll;
        cout << "Enter your name:";
        cin >> name;
        cout << "Enter your GPA:";
        cin >> GPA;
        student[i].set_value(roll, name, GPA);
    }

    for (int i = 0; i < stdn_number; i++)
    {
        student[i].display();
    }
    int searching_student;
    cout << "Enter the roll of the students whom you want to search : " << endl;
    cin >> searching_student;
    for (int i = 0; i < stdn_number; i++)
    {
        if (student[i].getRoll() == searching_student)
        {
            student[i].display();
        }
        else
        {
            // cout << "Student details not found ! " << endl;
            continue;
            
        }
    }
}
