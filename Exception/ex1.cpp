#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    try
    {
        if(age<0)
        {
            throw("Age cannot be negative");
        }
        else if(age==0)
        {
            throw (0);
        }
        else if (age>150)
        {
            throw("Age cannot be greater than 150");
        }
        else
        {
            cout<<"Your age is: "<<age<<endl;
    }
    }
    catch(const char* e)
    {
       cout<<e<<endl;
    }
    catch(int y)
    {
        cout<<y<<endl;
    }



    cout<<"After exception handling"<<endl;

}   
    
    
