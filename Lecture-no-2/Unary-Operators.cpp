// Increment++ : 

// Post :

// a++ : mean first work then update.
// a-- : mean first work then update.

// Pre :

// ++a : mean first update then work.
// --a : mean first update then work.

#include <iostream>
using namespace std;
int main()
{
    // Post increment Operator.
    // int a = 10;
    // int b = a++;
    // cout<<"b = "<<b<<endl; // 10
    // cout<<"a = "<<a<<endl; // 11

    // // Pre increment Operator.
    // int a = 10;
    // int b = ++a;
    // cout << "b = " << b << endl; // 11
    // cout << "a = " << a << endl; // 11

    // Post Decrement Operator.
    int a = 10;
    int b = a--;
    cout<<"b = "<<b<<endl; // 10
    cout<<"a = "<<a<<endl; // 9

    // Pre Decrement Operator.
    // int a = 10;
    // int b = --a;
    // cout << "b = " << b << endl; // 9
    // cout << "a = " << a << endl; // 9

    return 0;
} // namespace std;
