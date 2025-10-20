#include<iostream>
using namespace std;
class Distance
{
private:
    int feet;
    int inches;
public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }
    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }
    void display()
    {
        cout << "feet: " << feet << " " << "inches:" <<  inches << endl;
    }
    
    // Prefix increment operator
    Distance operator++()
    {
        inches++;
        if (inches >= 12)
        {
            feet += inches / 12;
            inches = inches % 12;
        }
        return *this;
    }
    
    // Postfix increment operator
    // Distance operator++(int)
    // {
    //     Distance temp = *this;
    //     inches++;
    //     if (inches >= 12)
    //     {
    //         feet += inches / 12;
    //         inches = inches % 12;
    //     }
    //     return temp;
    // }
    
    Distance operator+ (Distance d)
    {
        Distance temp;
        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;
        if (temp.inches >= 12)
        {
            temp.feet += temp.inches / 12;
            temp.inches = temp.inches % 12;
        }
        return temp;
    }
};

int main()
{
    Distance d1(5, 9), d2(6, 11), d3;
    d3 = d1 + d2;
    d3.display();
    cout<<"After Preincrementing d1:"<<endl;
    d1=++d1;
    d1.display();
    // d1++;  // Now this will work
    // d1.display();
    return 0;
}