#include<iostream>
using namespace std;

int main(){
    int n;
    // int n = 3;
    cout<<"Enter the number  of n : ";
    cin>>n;

    int num;
    // int num = 1;
    cout << "Enter the start number : ";
    cin >> num;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    cout << "After Pattern : "<< num << endl;
    return 0;
}

