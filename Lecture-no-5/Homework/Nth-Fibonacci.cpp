#include <iostream>
using namespace std;

// Function to calculate the nth Fibonacci number
int fibonacci(int n)
{
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;

    int prev1 =0, prev2 = 1, current;
    for (int i = 3; i <= n; i++) {
        current = prev1 + prev2;
        prev1 = prev2;
        prev2 = current;
    }
    return prev2;
}

int main() {
    int n;
    cout << "Enter the position of the Fibonacci number (n): ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input! Please enter a positive integer." << endl;
        return 1;
    }

    int result = fibonacci(n);
    cout << "The " << n << "-th Fibonacci number is: "<< result << endl;
    return 0;
}