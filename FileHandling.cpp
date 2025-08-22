#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream f;

    // // // 1. Write Mode (ios::out)
    // // f.open("Jannat.txt", ios::out);  // ফাইল তৈরি / পুরোনো ডাটা মুছে নতুন লিখবে
    // // if (!f) {
    // //     cout << "File could not be opened for writing!" << endl;
    // //     return 1;
    // // }
    // // f << "eita holo nnanata file.\n";
    // // // f << "This is line 2 (written in write mode).\n";
    // // // f << "jnatta.\n";
    // // f.close();
    // //  cout << "Data written successfully in write mode.\n\n";

    // // 2. Append Mode (ios::app)
    // f.open("Jannat.txt", ios::app);  // ফাইলের শেষে নতুন ডাটা যোগ হবে
    // if (!f) {
    //     cout << "File could not be opened for appending!" << endl;
    //     return 1;
    // }

    // f << "New line append korech.\n";
    // f.close();
    // cout << "Data appended successfully.";

    // 3. Read Mode (ios::in)
    // f.open("Jannat.txt", ios::in);  // ফাইল থেকে পড়বে
    // if (!f) {
    //     cout << "File could not be opened for reading!" << endl;
    //     return 1;
    // }
    // cout << "Reading from file:\n";
    // string line;
    // while (getline(f, line)) {
    //     cout << line << endl;
    // }
    // f.close();

    fstream ob;
    ob.open("Hima.txt", ios::out);
    if (!ob)
    {
        cout << "File could not be opened for writing!" << endl;
        return 1;
    }
    ob << "This is a new file created by Hima.\n";
    ob.close();
    cout << "File created and data written successfully.\n";

    ob.open("Hima.txt", ios::app);
    if (!ob)
    {
        cout << "File could not be opened for writing!" << endl;
        return 1;
    }
    ob << "shinchen.\n";
    ob.close();
    cout << "File created and data written successfully.\n";

    ob.open("Hima.txt", ios::in);
    if (!ob)
    {
        cout << "File could not be opened for writing!" << endl;
        return 1;
    }
    string l;
    while (getline(ob, l))
    {
        cout << l << endl;
    }
    ob.close();
    return 0;
}
