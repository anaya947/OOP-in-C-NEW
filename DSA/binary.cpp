#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 37, 30, 60, 74};
    
    int size = sizeof(arr) / sizeof(arr[0]);
    
    sort(arr,arr+size); // Sorting the array
    int h = size - 1;
    int l = 0;
    // int m = (h + l) / 2;
    bool found = false;
    int s = 77;
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
            l = m + 1;
        }
        else
        {
            h = m - 1;
        }
    }
    if (found == false)
    {
        cout << "OOPs! Element is not found!" << endl;
    }
    return 0;
}