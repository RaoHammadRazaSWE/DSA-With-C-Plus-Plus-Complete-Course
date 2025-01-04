#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number : ";
    cin>>n;

    // Pattern no 1 :

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < i+1; j++){
    //         cout<<i+1<<" ";
    //     }
    // cout<<endl;
    // }

    // Pattern no 2:

    for(int i = 0; i < n; i++){
        for(int j = 1; j <= i+1; j++){
            cout<<j<<" ";
        }
    cout<<endl;
    }
    return 0;
}