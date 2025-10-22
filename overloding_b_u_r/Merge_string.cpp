#include <iostream>
#include <string>
using namespace std;
class Merge_String
{
private:
    int length;
    string s;

public:
    Merge_String()
    {
        length = 0;
        s = " ";
    }
    Merge_String(int l, string str)
    {
        length = l;
        s = str;
    }
    Merge_String operator+(Merge_String ob)
    {
        Merge_String temp;
        temp.length = ob.length;
        temp.s = s + " " + ob.s;
        return temp;
    }
    void display()
    {
        cout << "Merged String : " << s << endl;
    }
};
int main()
{
    Merge_String s1(4, "Good"), s2(5, "Morning"), s3;

    s3 = s1 + s2;
    s3.display();
}