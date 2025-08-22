#include <iostream>
#include <string>
using namespace std;
class BankAccount
{
private:
    string account_number;
    string account_holder;
    double balance;

public:
    BankAccount(string acnumber, string acholder, double b)
    {
        account_number = acnumber;
        account_holder = acholder;
        balance = b;
    }

public:
    void deposit(double amount)
    {
        if (amount < 0)
        {
            cout << "Deposit amount cannot be negative!" << endl;
            return;
        }
        else
        {
            balance = balance + amount;
            cout << "Deposited: " << amount << endl;
            cout << "New Balance: " << balance << endl;
        }
    }
    void withdraw(double amount)
    {
        if (amount > balance)
        {
            cout << " eto taka nai re moyna!" << endl;
        }
        else
        {
            balance = balance - amount;
            cout << "Withdrawn: " << amount << endl;
            cout << "New Balance: " << balance << endl;
        }
    }
};
int main()
{

    string account_number, account_holder;
    double balance;

    cout << "Enter Account Number: ";
    cin >> account_number;

    cout << "Enter Account Holder Name: ";
    cin >> account_holder;

    cout << "Enter Initial Balance: ";
    cin >> balance;
    

    BankAccount account(account_number, account_holder, balance);


    cout << "                      Pubali Bank PlC" << endl;
    cout << "                      ------------------" << endl;
    cout << "1. Check Balance " << endl;
    cout << "2. Deposit       " << endl;
    cout << "3. Withdraw      " << endl;
    cout << "4. Exit      " << endl;

    int choice;
    cout << "Enter your choice: ";
    cin >> choice;


    while (choice != 5)
    {
        switch (choice)
        {
        case 1:
            cout << "Current Balance: " << balance << endl;
            break;
        case 2:
            double deposit_amount;
            cout << "Enter amount to deposit: ";
            cin >> deposit_amount;
            account.deposit(deposit_amount);
            break;
        case 3:
            double withdraw_amount;
            cout << "Enter amount to withdraw: ";
            cin >> withdraw_amount;
            account.withdraw(withdraw_amount);
            break;
        case 4:
            cout << "Exiting the program." << endl;
            //return 1;
            exit(1);
            
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
        cout << "Enter your choice: ";
        cin >> choice;
    }
    cout << "Thank you for using Pubali Bank PLC!" << endl;
    return 0;
}
