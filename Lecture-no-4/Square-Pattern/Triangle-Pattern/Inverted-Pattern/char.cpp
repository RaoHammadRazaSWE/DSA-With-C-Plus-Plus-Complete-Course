#include<iostream>
using namespace std;

int main(){
    char C;
    cout << "Enter the End Character (e.g., A-Z) : ";
    cin >> C;

    for (char i = 'A'; i <= C; i++)
    {
        // Print leading spaces
        for (char j = 'A'; j < i; j++)
        {
            cout << " ";
        }
        for (char j = i; j <= C; j++){
            cout << i;
        }
        cout << endl;
    }
    return 0;
}