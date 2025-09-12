#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{  

fstream ob;
try
{
        ob.open("Himthvhvga.txt", ios::in);
        if (!ob)
        {
            throw "File could not be opened for writing!";
        }
        ob << "This is a new file created by Hima.\n";
        ob.close();
        cout << "File created and data written successfully.\n";
}
catch(const char* e)    
{
    cout << e<< endl;
}
    
    return 0;
}
    
