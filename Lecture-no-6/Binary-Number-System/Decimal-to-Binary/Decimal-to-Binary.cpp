#include<iostream>
using namespace std;

int decToBinary(int decNum){
    int ans = 0, pow = 1;

    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }

    return ans; // Binary form
    
}

int main() {
    int decNum = 50;

    for (int i = 1; i<=10; i++){

    cout << decToBinary(i) << endl;
    }
    return 0;
}