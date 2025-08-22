// // Create a Car class with some attributes
// #include<iostream>
// #include<string>
// using namespace std;
// class Car {
//   public:
//     string brand;   
//     string model;
//     int year;
// };

// int main() {
//   // Create an object of Car
//   Car carObj1;
//   carObj1.brand = "BMW";
//   carObj1.model = "X5";
//   carObj1.year = 1999;

//   // Create another object of Car
//   Car carObj2;
//   carObj2.brand = "Ford";
//   carObj2.model = "Mustang";
//   carObj2.year = 1969;
//   Car ob3;
//   ob3.brand="Tempu";
//   ob3.model="Jhu";
//   ob3.year=2025;

//   // Print attribute values
//   cout << carObj1.brand << "      " << carObj1.model << " " << carObj1.year << "\n";
//   cout << carObj2.brand << "      " << carObj2.model << " " << carObj2.year << "\n";
//   cout<<"The ob3's barnd name is : "<<ob3.brand<<endl;
//   return 0;
// }

// Create a Car class with some attributes
#include<iostream>
#include<string>
using namespace std;
class Car {
  public:
    string brand; 
    string model;
    int year;
   
  Car(string b,string m,int y)
  {
    this->brand=b;
    this->model=m;
    this->year=y;
  }
 void display()
 {
    cout<<"Brand="<<brand<<endl;
    cout<<"Model="<<model<<endl;
    cout<<"Year="<<year<<endl;
 }

};

int main()
{
    Car ob1("BMW","Jhu",2020);
    ob1.display();
    Car muut("Buuuuu","cuuuu",9090);
    muut.display();

}
