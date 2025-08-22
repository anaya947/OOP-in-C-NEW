#include <iostream>
using namespace std;

class Person {
    int age;
public:
    void speak() {
        cout << "Person speaks." << endl;
    }
    Person(int a){
        age=a;
    }
    // Getter for age
    int getAge() const {
        return age;
    }
};

class Student : virtual public Person {
public:
    void study() {
        cout << "Student studies." << endl;
    }
};

class Teacher :virtual public Person {
public:
    void teach() {
        cout << "Teacher teaches." << endl;
    }
};

// Hybrid: ExamTaker inherits from Student and Teacher (Multiple + Hierarchical)
class ExamTaker : public Student, public Teacher {
public:
    void takeExam() {
        cout << "Taking exam." << endl;
    }
};

int main() {
    Person p(5);
    cout<<"The age is:"<<p.getAge();

}