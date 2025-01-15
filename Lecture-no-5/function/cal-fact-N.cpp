#include <iostream>
using namespace std;

int factorialN(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        // fact = fact * i;//M1
        fact *= i; // M2
    }
    return fact;
}
int main()
{
    cout << factorialN(5) << endl;
    cout << factorialN(7) << endl;
    return 0;
}