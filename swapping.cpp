// #include<iostream>
// using namespace std;
// void swaping( int &a,int &b)
// {
//     int z;
//     z=a;
//     a=b;
//     b=z;
    

// }
// int main()
// {
//     int x,y;
//     cout<<"Enter two number:"<<endl;
//     cin>> x>>y;
//     swaping(x,y);
//     cout<<"After swaping:"<<x<<" "<<y<<endl;

// } 


#include<iostream>
using namespace std;

pair<int,int> swaping(int a, int b)
{
    return make_pair(b, a); // works in all C++ versions
}

int main()
{
    int x, y;
    cout << "Enter two numbers:" << endl;
    cin >> x >> y;

    pair<int,int> swapped = swaping(x, y);

    cout << "After swapping: " << swapped.first << " " << swapped.second << endl;

    return 0;
}
