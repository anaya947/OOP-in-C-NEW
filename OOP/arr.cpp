#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    int id;
    string name;
    double marks;

public:
    void setData(int i, string n, double m)
    {

        id = i;
        name = n;
        marks = m;
    }
    void Display()
    {
        cout << "ID: " << id << ", Name: " << name << ", Marks: " << marks << endl;
    }
    void Specific(double m)
    {
        if (marks>=m)
        {
            cout << "ID: " << id << ", Name: " << name << ", Marks: " << marks << endl;
        
            
        }
        else if(marks<m)
        {
            // Do nothing
            cout << "The student " << name << " has marks less than " << m << endl;
        }
        else
        {
            cout << "No student found with marks greater than or equal to " << m << endl;
        }
    }
};
int main()
{

    int id;
    string name;
    double marks;
    double sum = 0;
    int size;
    cout << "Enter number of students : ";
    cin >> size;
    Student students[size];

    // Input data for each student
    for (int i = 0; i < size; i++)
    {
        cout << "Enter details for student " << (i + 1) << ":\n";
        cout << "ID: ";
        cin >> id;
        cout << "Name: ";
        cin >> name;
        cout << "Marks: ";
        cin >> marks;
        sum = sum + marks;
        students[i].setData(id, name, marks);
    }
    cout << "Total marks of " << size << " students is : " << sum << endl;
    cout << "Average marks of " << size << " students is : " << double(sum / size) << endl;

    // Display data for each student
    cout << "\nStudent Details:\n";
    for (int i = 0; i < size; i++)
    {
        students[i].Display();
    }
    double m;
    cout << "\nStudents with marks greater than or equal to a specific value:\n";
    cout << "Enter the specific marks value: ";
    cin >> m;
    for (int i = 0; i < size; i++)
    {
        students[i].Specific(m);
    }
    return 0;
}
