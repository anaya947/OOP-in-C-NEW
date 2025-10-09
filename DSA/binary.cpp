#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 37, 40, 60, 74};
    int size = sizeof(arr) / sizeof(arr[0]);
    int h = size - 1;
    int l = 0;
    // int m = (h + l) / 2;
    bool found = false;
    int s = 37;
    while (l <= h)
    {
        int m = (h + l) / 2;

        if (arr[m] == s)
        {
            cout << "Element found at position :" << m << endl;
            found = true;
            break;
        }
        else if (arr[m] < s)
        {
            h = m + 1;
        }
        else
        {
            l = m - 1;
        }
    }
    if (found == false)
    {
        cout << "OOPs! Element is not found!" << endl;
    }
    return 0;
}