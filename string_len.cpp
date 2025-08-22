// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string word = "Programming";
//     cout << "Length: " << word.length() << endl;
//     return 0;
// }
// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string text = "Hello World";
//     string part = text.substr(0, 5); 
//     cout << "Substring: " << part << endl;
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string text = "Hello World";
//     int pos = text.find(" "); // Find the position of "World"
//     if (pos == -1)
//         cout << "Not found" << endl;
//     else
//         cout << "Found at: " << pos << endl;

//     return 0;
// }


#include <iostream>
#include <string>
using namespace std;

int main() {
    string text = "dada";
    // text.replace(2, 4, "love"); // from index 2, replace 4 chars with "love"
    // text.append(" milon"); // Append " bugs" to the end of the string
    // text.insert(2, " love "); // Insert " love " at index 2
    // text.replace(2,3,"mil");
    string newst=string(text.rbegin(),text.rend());
    if(newst == text) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a palindrome" << endl;
    }
    //cout << newst << endl; // Output: I love bugs
    return 0;
}
