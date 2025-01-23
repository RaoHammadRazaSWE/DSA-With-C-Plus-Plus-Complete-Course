// WAF to print all prime numbers from 2 to N.

#include <iostream>
using namespace std;

bool isPrime(int n ){
    if (n <= 1)
    return false;
    for (int i = 2; i < n; i++){
        if (n % i == 0)
        return false;
    }
    return true;
}

int main() {
    int N;
    cout<< "Enter the value of N: ";
    cin>> N;

    cout <<"Prime numbers from 2 to " << N << " are : "<< endl;
    for (int i = 1; i <= N; i++){
        if (isPrime(i)){
            cout<< i << " ";
        }
    }
    cout << endl;

    return 0;
}