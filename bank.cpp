#include <iostream>
#include <string>
using namespace std;
class Bank
{
public:
    int id;
    string BranchName;
    string Address;

private:
    int amount;

public:
    Bank()
    {
        cout << "This is default constrcutor" << endl;
    }
    Bank(int i, string bname, string addr,int a)
    {
        id = i;
        BranchName = bname;
        Address = addr;
        amount=a;
    }

public:
    void display()
    {
        cout << "Id : " << id << endl;
        cout << "Branch Name : " << BranchName << endl;
        cout << "Bank address: " << Address << endl;
        cout << "Bank Amount : " << amount << endl;
    }

    // void setAmount(int a)
    // {
    //     amount = a;
    // }
    // void getAmount()
    // {
    //     cout << "Amount:" << amount << endl;
    // }
};

int main()
{
    // Bank Jmuna;
    // Jmuna.id = 98761;
    // Jmuna.BranchName = "Islampur";
    // Jmuna.Address = "Sodorghat";
    // Jmuna.amount = 50000;
    // Jmuna.setAmount(5000);
    // Jmuna.display();
    // Jmuna.getAmount();

    // Uisng constructor
    Bank Jamuna(123, "Islampur", "Sadarghat",60000);

    Jamuna.display();
}