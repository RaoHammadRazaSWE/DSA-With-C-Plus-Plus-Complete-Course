#include <iostream>

using namespace std;

int main() // Main function
{
    int a, b; // Declare variables

    cout << "Enter the value of a: ";
    cin >> a; // Read the user's input

    cout << "Enter the value of b: ";
    cin >> b; // Read the user's input

    // Determine the max value
    if (a > b)
    {
        cout << "The max value is: " << a << endl;
    }
    else if (a < b)
    {
        cout << "The max value is: " << b << endl;
    }
    else
    {
        cout << "Both numbers are equal: " << a << endl;
    }

    return 0; // Return 0 to indicate successful execution
}
