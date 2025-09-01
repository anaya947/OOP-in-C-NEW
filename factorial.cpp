// #include <iostream>
// using namespace std;
// int Fact_Calculation(int n)
// {
//     int fact = 1;
//     for (int i = 0; i < n; i++)
//     {
//         fact = fact + fact * i;
//     }
//     return fact;
// }
// int main()
// {
//     int x;
//     cout << "Enter any number : " ;
//     cin >> x;
//     int f=Fact_Calculation(x);

//     cout << "The factorial of " << x << " is : " << f << endl;
// }


#include <iostream>
using namespace std;
int Fact_Calculation(int n)
{
    int fact = 1;
    for (int i = 0; i < n; i++)
    {
        fact = fact + fact * i;
    }
    return fact;
}
int main()
{
    int n,r;
    cout << "Enter (n and r ) : " ;
    cin >> n>>r;
    int a=Fact_Calculation(n);
    int b=Fact_Calculation(r);
    int c=Fact_Calculation(n-r);


    int combinations=a/(b*c);
    int permutations=a/c;
    cout << "The combinations of " << n << " and " << r << " is : " << combinations << endl;
    cout << "The permutations of " << n << " and " << r << " is : " << permutations << endl;
}