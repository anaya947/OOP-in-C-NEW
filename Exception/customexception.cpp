#include <iostream>
using namespace std;
class MilonSirException
{
    string massage;

public:
    MilonSirException(string m)
    {
        massage = m;
    }
    void display()
    {
        cout << "Milon sir exception er message : " << massage << endl;
    }
};
int main()
{

    try
    {

        int age;
        cout << "Enter age :";
        cin >> age;
        if (age == 25)
        {
            throw MilonSirException("Age is 25,so it is milon sir exception! ");
        }
    }
    catch (MilonSirException obj)
    {
        obj.display();
    }

    cout << "After exception handling" << endl;
}
