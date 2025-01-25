#include <iostream>
using namespace std;

int decToBinary(int decNum)
{
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

int binToDecimal(int binNum){
    int ans = 0, pow = 1;

    while (binNum > 0)
    {
        int rem = binNum % 10;
        ans += rem * pow;

        binNum /= 10;
        pow *= 2;
    }

    return ans;
    
}
int main()
{
    
        cout << binToDecimal(101) << endl; // 5
    
    return 0;
}