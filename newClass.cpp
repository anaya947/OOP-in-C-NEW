#include <iostream>
#include <string>
using namespace std;

class person
{
public:
    int age;
    string name;

private:
    string address;
public:
    person(string n, string add, int a)
    {
        this->name = n;
        this->address=add;
        this->age=a;
    }

public:
    void getAge()
    {
        cout << "The age is : " << age << endl;
    }
    void getName()
    {
        cout << "The name is : " << name << endl;
    }
    void getAddress()
    {
        cout << "The address is : " << address << endl;
    }
};

int main()
{

    int age;
    string name,add;
    cout<<"Enter Name :"<<endl;
    cin>>name;
    cout<<"Enter address :"<<endl;
    cin>>add;
    cout<<"Enter age :"<<endl;
    cin>>age;
    person p(name,add,age);
    p.getAge();
    p.getName();
    p.getAddress();
   

    cout<<"Enter Name :"<<endl;
    cin>>name;
    cout<<"Enter address :"<<endl;
    cin>>add;
    cout<<"Enter age :"<<endl;
    cin>>age;

    person janna(name,add,age);
    janna.getAge();
    janna.getName();
    janna.getAddress();
}