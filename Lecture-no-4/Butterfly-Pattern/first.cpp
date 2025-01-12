#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of N : ";
    cin >> n;

    // Upper part of the butterfly
    for (int i = 1; i <= n; i++)
    {
        // left stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // Spaces
        for(int j = 1; j <=2 *(n-i); j++){
            cout<< " ";
        }
        // Right stars
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    // Lower part of the butterfly
    for (int i = n; i >= 1; i--)
    {
        // left stars
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        // Spaces
        for (int j = 1; j <= 2 * (n - i); j++)
        { 
            cout << " ";
        }
        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;

}