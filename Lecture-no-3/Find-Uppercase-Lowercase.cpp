#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout<< "Enter char: ";
    cin>>ch;

    // if(ch >= 'a' && ch <= 'z'){
    //     cout<<"lowercase\n";
    // }
    // else {
    //     cout << "uppercase\n";
    // }

    if (ch >= 65 && ch <= 90)
    {
        cout << "uppercase\n";
    }
    else
    {
        cout << "lowercase\n";
    }

    return 0;
}