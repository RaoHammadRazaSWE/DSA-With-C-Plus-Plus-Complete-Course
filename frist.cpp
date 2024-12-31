#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter the number of N : ";
    cin>>n;

    //  Qno1 : Square Pattern: from of char and * 

    // for(int i=0; i<=n; i++){ // OUter
    //     char ch = 'A';
    //     for(int j=0; j<=n; j++){ // Inner start.
    //         cout << ch;
    //         ch = ch + 1;
    //         // Print simple number.
    //         // cout<< j << " "; 
    //         // Print Stars.
    //         // cout<<" * ";
    //         cout<<" ";
            
    //     }

        //     cout<<endl;
    // }

    //  Qno2 : Square Pattern: Form of number

    int num = 1;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<num<< " ";
            num++;
        }
        cout<<endl;
    }
    cout << "after pattern : " << num << endl; // 10
    return 0;
} 
