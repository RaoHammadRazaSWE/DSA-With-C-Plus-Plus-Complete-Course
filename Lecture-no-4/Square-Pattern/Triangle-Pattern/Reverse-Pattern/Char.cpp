#include <iostream>
using namespace std;

int main()
{
    char C;
    cout << "Enter the End Character (e.g., A-Z): ";
    cin >> C;

    for (int i = 0; i < ( C - 'A' + 1); i++) {
        for (char j = 'A' + i; j >= 'A'; j--){
            cout << j << " ";
        }
        cout << endl;
    }
return 0;
}