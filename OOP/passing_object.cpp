// #include <iostream>
// using namespace std;
// class MyClass
// {
//     int a;

// public:
//     MyClass(int value)
//     {
//         a = value;
//     }
//     int get()
//     {
//         return a;
//     }
// };
// int sqr(MyClass m)
// {
//     return m.get() * m.get();
// }
// int main()
// {
//     MyClass ahhh(5);
//     MyClass bggg(10), c(100);

//     cout << sqr(c);
// }
#include <iostream>
using namespace std;

class samp {
    int i;
public:
    samp(int n) { i = n; }
    void set_i(int n) { i = n; }
    int get_i() { return i; }
};

void sqr_it(samp &o) {
    o.set_i(o.get_i() * o.get_i());
    cout << "Copy of a has i value of " << o.get_i() << "\n";
}

int main() {
    samp a(10);
    sqr_it(a); // pass address of a to sqr_it()
    cout << "Now, a in main() has been changed: ";
    cout << a.get_i(); // displays 100
    return 0;
}
