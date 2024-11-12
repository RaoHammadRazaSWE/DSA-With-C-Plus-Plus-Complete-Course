#include <iostream>
using namespace std;

int main()
{
    float P, R, T, SI;

    // Taking inputs
    cout << "Enter Principal: ";
    cin >> P;
    cout << "Enter Rate: ";
    cin >> R;
    cout << "Enter Time: ";
    cin >> T;

    // Calculating Simple Interest
    SI = (P * R * T) / 100;

    // Outputting the result
    cout << "Simple Interest: " << SI << endl;

    return 0;
}
