#include <iostream>
#include <string>
using namespace std;
class Book
{
    int id;
    string title;
    string author;

public:
    void set_value(int i, string t, string a)
    {
        id= i;
        title = t;
        author = a;
    }
    void display()
    {
        cout << "ID : " << id<< " " << "Title: " << title << " " << "Author:" << author<< " " << endl;
    }
    string getTitle()
    {
        return title;
    }
};
int main()
{
    int ID;
    string t;
    string a;
    int size;
    cout << "Enter the number of books : " << endl;
    cin >> size;
    Book obj[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter details for book : " << i + 1 << endl;
        cout << "Enter book ID:";
        cin >> ID;
        cout << "Enter Title:";
        cin>>t;
        //getline(cin,t);

        cout << "Enter Author:";
        cin>>a;
        // getline(cin,a);
        obj[i].set_value(ID,t,a);
    }

    for (int i = 0; i < size; i++)
    {
        obj[i].display();
    }
    string searching_book;
    cout << "Enter the title of the book which you want to search : " << endl;
    cin >> searching_book;
    cout<<"Search Results : "<<endl;
    for (int i = 0; i < size; i++)
    {
        if (obj[i].getTitle() == searching_book)
        {
            obj[i].display();
        }
        else
        {
            // cout << "Student details not found ! " << endl;
            continue;
            
        }
    }
}
