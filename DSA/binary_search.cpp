#include<iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40, 50};


    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 30;
    int left = 0, right = size - 1;
    bool found = false;
    while (left <= right)
    {
       int mid = (left + right)/ 2;
        if (arr[mid] == key)
        {
            cout << "Element found at index: " << mid << endl;
            found = true;
            break;
        }
        else if (arr[mid] < key)
        {
            left = mid + 1; // Search in the right half
        }
        else
        {
            right = mid - 1; // Search in the left half
        }
          
    }
    if (found==false)
    {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}