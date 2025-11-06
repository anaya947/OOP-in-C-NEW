#include <iostream>
using namespace std;
class Account
{
protected:
    string holder_name;
    int acc_number;
    double balance;
public:
    Account()
    {
        holder_name = "Shimu";
        acc_number = 1234;
        balance = 1000000;
    }
    Account(string hn, int acn, double b)
    {
        holder_name = hn;
        acc_number = acn;
        balance = b;
    }
    void deposit_money(double m)
    {
        if (m < 0)
        {
            cout << "Please enter positive amount!" << endl;
        }
        else
        {
            double new_balance = balance + m;
            cout << "BDT" << m << "has been deposited successfully!" << endl;
            cout << "After deposit ,New balance is : " << new_balance << endl;
        }
    }
    void withdraw(double withdrawal_balance)
    {
        if (withdrawal_balance > balance)
        {
            cout << "Insufficient balance ! " << endl;
        }
        else
        {
            double new_balance = balance - withdrawal_balance;
            cout << "BDT" << withdrawal_balance << "has been withdrawn successfully!" << endl;
            cout << "After withdrawn , New balance is : " << new_balance << endl;
        }
    }
    void display()
    {
        cout << "------Account details-------" << endl;

        cout << "Account Holder's : " << holder_name << endl;
        cout << "Account number is : " << acc_number << endl;
        cout << "Balance is : " << balance << endl;
    }
    Account operator+(Account obj)
    {
        Account temp;
        temp.balance = balance + obj.balance;
        return temp;
    }
    bool operator>(Account ob)

    {
        if (balance > ob.balance)
        {
            // cout << " The balance is high for Account 1 " << endl;
            return 1;
        }
        else
        {
            return 0;
            // cout << " The balance is high for Account 2 " << endl;
        }
    }
};
class SavingsAccount : public Account
{
    public:
    double rate;
    SavingsAccount(string hn, int acn, double b, double r) : Account(hn, acn, b)
    {
        rate = r;
    }
    double addInereset()
    {
        balance = balance * 0.1;
        return balance;
    }
};
int main()
{
    Account a1("Milon", 123, 20000.0), a2("jannat", 3456, 120.0), a3;
    // a1.deposit_money(200.0);
    // a1.withdraw(200.0);
    // a3=a1+a2;
    // a3.display();
    if (a1 > a2)
    {
        cout << " The balance is high for Account 1 " << endl;
    }
    else
    {

        cout << " The balance is high for Account 2 " << endl;
    }
    SavingsAccount sa("jhggggk" ,123,689.0,10.0);
    cout<<sa.addInereset()<<endl;



}