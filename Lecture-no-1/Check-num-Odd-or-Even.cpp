#include<iostream>
using namespace std;

int main() {
    int n, Even = 0, Odd = 0;
    cout<<"Enter the number of n :";
    cin>>n;
    if(n % 2 == 0){
        cout<< " This number is even "<<endl;
    }
    else
    {
        cout<< " This number is odd "<<endl;
    }
}