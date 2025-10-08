#include <iostream>
#include <string>
using namespace std;
class Car
{
    int id;
    string model;
    double price;

public:
    void set_value(int i, string m, double p)
    {
        id = i;
        model = m;
        price = p;
    }
    void display()
    {
        cout << "ID : " << id << " " << "Model: " << model << " " << "Price:" << price << " " << endl;
    }
    double getPrice()
    {
        return price;
    }
};
int main()
{
    int id;
    string m;
    double p;
    int size;
    cout << "Enter the number of cars : " << endl;
    cin >> size;
    Car obj[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter details for car : " << i + 1 << endl;
        cout << "Enter car id :";
        cin >> id;
        cout << "Enter model:";
        cin >> m;
        // getline(cin,t);

        cout << "Enter Rental Price :";
        cin >> p;
        // getline(cin,a);
        obj[i].set_value(id, m, p);
    }

    // for (int i = 0; i < size; i++)
    // {
    //     obj[i].display();
    // }

    
    double userBUdget;
    cout << "Enter your per day budget " << endl;
    cin >> userBUdget;


     bool found=false;


    cout << "Search Results : " << endl;


    for (int i = 0; i < size; i++)
    {
        if (userBUdget>=obj[i].getPrice() )
        {
            obj[i].display();
            found=true;
        }
        else
        {
            // cout << "Student details not found ! " << endl;
            continue;
        }
    }
    if(found==false)
    {
        cout<<" sorry ! Vai ei takar moddhe kono car nai..low class show room e jaaaan";
    }

}
