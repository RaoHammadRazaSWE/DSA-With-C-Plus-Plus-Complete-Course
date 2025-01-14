#include<iostream>
using namespace std;

// Function definition :

// Method no : 1
// void printHello() {
//     cout<< "Hello Everyone \n";
// }

// For example any functions return value Then :

// Method no : 2
int printHello()
{
    cout << "Hello Everyone \n";
    return 3;
}
int main() {
    // Function call / invoke

    // Method no : 1
    // printHello();
    // printHello();

    // Method no : 2
    // int val = printHello();
    // cout << "val = "<<val<<endl;

    // Method no : 3
    cout << printHello() << endl;
    return 0;
}