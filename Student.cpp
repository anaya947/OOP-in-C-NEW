// #include <iostream>
// #include <string>
// using namespace std ;

// class Student {
//     private:
//         string name;
//         int rollNo;
//         double marks[3];
//     public:
//     Student(string n, int r, double m1, double m2, double m3) {
//         name = n;
//         rollNo = r;
//         marks[0] = m1;
//         marks[1] = m2;
//         marks[2] = m3;
//     }
//     double totalMarks() {
//         return marks[0] + marks[1] + marks[2];
//     }
//     double averageMarks() {
//         return totalMarks() / 3.0;
//     }
//     void display() {
//         cout << "Name: " << name << endl;
//         cout << "Roll No: " << rollNo << endl;
//         cout << "Marks: " << marks[0] << ", " << marks[1] << ", " << marks[2] << endl;
//         cout << "Total Marks: " << totalMarks() << endl;
//         cout << "Average Marks: " << averageMarks() << endl;
//     }

// };
// int main()
// {
//     string name;
//     int rollNo;
//     double marks1, marks2, marks3;
//     cout << "Enter student name: ";
//     cin >> name;
//     cout << "Enter roll number: ";
//     cin >> rollNo;
//     cout << "Enter marks for three subjects: ";
//     cin >> marks1 >> marks2 >> marks3;
//     Student student1(name, rollNo, marks1, marks2, marks3);
//     //Student student2("Bob", 102, 88.0, 92.5, 80.0);
//     student1.display();

//     cout << endl;
//    // student2.display();
//     cout << endl;

//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    double marks[3];

public:
    Student(string n, int r, double ma[])
    {
        name = n;
        rollNo = r;
        for (int i = 0; i < 3; i++)
        {
            this->marks[i] = ma[i];
        }
    }
    double totalMarks()
    {
        double sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum = sum + marks[i];
        }
        return sum;
    }
    double averageMarks()
    {
        double s = totalMarks();
        double avg = s / 3.0;
        return avg;
        // return totalMarks() / 3.0;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: ";
        for (int i = 0; i < 3; i++)
        {
            cout << marks[i] << " ";
        }
        cout << endl;
        cout << "Total Marks: " << totalMarks() << endl;
        cout << "Average Marks: " << averageMarks() << endl;
    }
};
int main()
{
    string name;
    int rollNo;
    double marks[3];
    
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter marks for three subjects: ";
    for (int i = 0; i < 3; i++)
    {
        cin >> marks[i];
    }

    Student student1(name, rollNo, marks);
    student1.display();
    
    return 0;
}
    