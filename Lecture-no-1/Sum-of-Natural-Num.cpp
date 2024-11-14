#include<iostream>
using namespace std;

int main()
{
    int n, sum = 0, count = 1;
    cout << "Enter the number n: ";
    cin >> n;

    // Loop to calculate the sum of natural numbers
    while (count <= n)
    {
        // sum = sum + count; // Add current count to sum
        sum += count; // Short form
        // count = count + 1;      // Increment the count
        count += 1;
    }

    cout << "Sum of natural numbers is: " << sum << endl; // Correct output

    return 0;
}
