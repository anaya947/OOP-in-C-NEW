#include <iostream>
using namespace std;
class A
{
public:
     void showA()
    {
        cout << "Class A show function called." << endl;
    }
};

class D : virtual public A
{
// public:
//     void show()
//     {
//         cout << "Class B show function called." << endl;
//     }
};

class C : virtual public A
{
// public:
//     void show()
//     {
//         cout << "Class C show function called." << endl;
//     }
};
class E : public D, public C
{
// public:
//     void show()
//     {
//         cout << "Class D show function called." << endl;
//     }
};

int main()
{
    E objE;
    objE.showA();




    // // objD.show(); // Error: Ambiguous call to show()
    // objD.B::showA(); // Resolving ambiguity by specifying the path
    // objD.C::showA(); // Resolving ambiguity by specifying the path
    return 0;
}