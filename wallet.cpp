#include <iostream>
using namespace std;
class Wallet
{
private:
    string owner_name;
    double balance;

public:
    Wallet(string n, double b)
    {
        owner_name = n;
        balance = b;
    }
    friend void transfer_salami(Wallet w, Wallet y, double transfer_amount);
    void display()
    {
        cout << "Owner's name : " << owner_name << endl;
        cout << "Balance is : " << balance << endl;
    }
};
void transfer_salami(Wallet a, Wallet b, double transfer_amount)
{
    if (transfer_amount < a.balance)
    {
        a.balance = a.balance - transfer_amount;
        b.balance = b.balance + transfer_amount;
        cout << "Current balance of Wallet A is : " << a.balance << endl;
        cout << "Current balance of Wallet B is : " << b.balance << endl;
    }
    else
    {
        cout << "A doesn't have sufficient balacne!" << endl;
    }
}
int main()
{
    Wallet milon("Milon", 20000);
    Wallet jannat("Jannatul Ferdous", 1000);
    milon.display();
    cout << endl;
    jannat.display();
    transfer_salami(milon, jannat, 2000);
}