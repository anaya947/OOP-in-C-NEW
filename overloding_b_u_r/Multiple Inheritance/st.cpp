#include <iostream>
using namespace std;
class Student
{
public:
    string s_name;
    int s_id;

public:
    Student(string sn, int si)
    {
        s_name = sn;
        s_id = si;
    }
};
class Course
{
public:
    string c_name;
    string c_code;

public:
    Course(string cn, string cd)
    {
        c_name = cn;
        c_code = cd;
    }
};
class University
{
public:
    string u_name;
    string address;

public:
    University(string un, string add)
    {
        u_name = un;
        address = add;
    }
};
class Enrollment : public Student, public Course, public University
{
public:
    string enrollment_date;

public:
    Enrollment(string st_name, int ID, string course_name, string course_id, string university, string add, string date) : Student(st_name, ID), Course(course_name, course_id), University(university, add)
    {
        enrollment_date = date;
    }

    void printdetails()
    {
        cout << "Student name:" << s_name << endl;
        cout << "Student Id= " << s_id << endl;
        cout << "Course name : " << c_name << endl;
        cout << "Course code : " << c_code << endl;

        cout << "University name : " << u_name << endl;

        cout << " University address : " << address << endl;
        cout << "Enrollment date : " << enrollment_date << endl;
    }
};

int main()
{

    Enrollment e("Milon", 28, "CSE", "CSE-4102", "JnU", "Sadarghat", "2021-10-20");
    e.printdetails();
}
