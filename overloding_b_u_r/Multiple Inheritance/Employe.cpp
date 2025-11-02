#include <iostream>
using namespace std;

class Employee {
protected:
    int empID;
    
private:
    double salary; // Only accessible within Employee class
    
public:
    Employee(int id, double sal) 
    {
        empID = id;
        salary = sal;
    }
    
    void display() {
        cout << "Employee ID: " << empID << endl;
        // salary cannot be displayed here as it's private to Employee
    }
    
    // Getter for salary - only Manager should be able to use this
    double getSalary() const {
        return salary;
    }
};

class Manager : public Employee {
public:
    Manager(int id, double sal) : Employee(id, sal) {}
    
    // Manager can access salary through getter
    void display() {
        cout << "Manager - Employee ID: " << empID << endl;
        cout << "Salary: " << getSalary() << endl; // Access via getter
    }
    
    // // Manager-specific method that uses salary
    // void giveRaise(double percentage) {
    //     cout << "Current salary: " << getSalary() << endl;
    //     cout << "Raise of " << percentage << "% would be: " 
    //          << (getSalary() * percentage / 100) << endl;
    // }
};

class AssistantManager : public Manager {
public:
    AssistantManager(int id, double sal) : Manager(id, sal) {}
    
    void display() {
        cout << "Assistant Manager - Employee ID: " << empID << endl;
        // cout << "Salary: " << salary << endl; // Access via getter
    }
};

int main() {
    // Create objects
    Employee emp(1001, 50000);
    Manager mgr(2001, 80000);
    AssistantManager asstMgr(3001, 60000);
    
    cout << "=== Employee Display ===" << endl;
    emp.display();
    
    cout << "\n=== Manager Display ===" << endl;
    mgr.display();
    
    cout << "\n=== Assistant Manager Display ===" << endl;
    asstMgr.display();
    
    return 0;
}