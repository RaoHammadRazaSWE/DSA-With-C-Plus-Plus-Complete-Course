// Print Factorial of a number N.

#include<iostream>
using namespace std;

int main()
{
int n;
long fact = 1;

    cout << "Enter the number to find its Factorial : ";
    cin>>n;

    for(int i = 1; i<= n; i++)
    {
        fact *= i;
    }

    cout<< "The factorial of "<< n << " is: "<<fact<<endl;
    return 0;
}