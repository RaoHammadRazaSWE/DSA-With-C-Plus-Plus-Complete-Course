#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number  of Pattern Size : ";
    cin >> n;

    char ABC;
    cout << "Enter the start Character : ";
    cin >> ABC;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ABC << " ";
            ABC++;
        }
        cout << endl;
    }
    cout << "After Pattern : " << ABC << endl;
    return 0;
}
