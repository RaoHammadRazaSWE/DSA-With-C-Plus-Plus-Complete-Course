#include<iostream>
using namespace std;

int main()
{
    int i = 2, n;
    bool isPrime = true;

    cout<<"Enter the number n : ";
    cin>>n;

    if (n <= 1) {
        cout << "The number is non-prime" <<endl;
        return 0;
    }

    while (i <= n / 2)
    {
        if (n % i == 0 )
        {
            isPrime = false;
            break;
        }
        i++;
    }
        if (isPrime){
            cout << "The number is prime."<<endl;
        }
        else
        {
            cout<<"The number is non-Prime";
        }
    return 0;

}