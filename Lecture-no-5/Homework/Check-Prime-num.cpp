// WAF to  check if a number is prime or not.

#include <iostream>
using namespace std;

bool isPrime(int n){
    if (n <= 1){
        return false;
    }

    // Check divisibility from 2 to n / 2
    for (int i = 2; i <= n / 2; i++){
        if (n %  i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin>>n;
    if (isPrime(n)) {
        cout << n << " is a prime number." << endl;
    }
    else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}