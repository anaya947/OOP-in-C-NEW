#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter array size:";
    cin>>size;
    int arr[size];

    cout<<"Enter array element:";
    for(int i=0;i<size;i++)
    {
         cin>>arr[i];
    }
   
    int max=arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>=max)
        {
            max=arr[i];
        }
        else
        {
            max=max;
        }
    }
    cout<<"Largest :"<<max<<endl;


} 