#include <iostream>
using namespace std;

int main()
{
    // Print number 1 to 5 with while loop:
    // int count = 1;
    // while (count <= 5){
    //     cout<<count<<endl;
    //     count ++;
    // }

    // Print number 1 to 5 with for loop:
    // int n = 5;
    // for (int i=1 ; i <= n; i++)
    // {
    //     cout << i << endl;
    // }

    // Sum of odd numbers from 1 to n with for loop.

    // int n = 50;
    // int oddsum = 0;

    // for(int i=1; i<=n; i++){
    //     if(i%2 != 0){
    //         oddsum += i;
    //     }   
    // }

    // cout<<"odd sum = "<< oddsum << endl;

    // Sum of odd numbers from 1 to n with while loop.

    // int n = 50;
    // int oddsum = 0;
    // int i = 1;

    // while (i <= n)
    // {
        
    //         if (i % 2 != 0)
    //         {
    //             oddsum += i;
    //         }
        
    //         i++;
    // }
    //     cout << "odd sum = " << oddsum << endl;

    // Sum of even numbers from 1 to n with while loop.

    // int n;
    // int evensum = 0;
    // cout<<"Enter the number of n :  ";
    // cin>>n;

    // for(int i=1; i<=n; i++){
    //     if(i % 2 == 0){
    //         evensum += i;
    //     }
    // }

    // cout<<"even sum = "<< evensum << endl;

    // Do while loop :

    // do {
    //     cout<<"Hello Dear";
    // }
    // while(3 => 5);

    // int n = 10;
    // int i = 1;
    // do {
    //     cout << i << " ";
    //     i++;
    // } while( i <= n);

    // cout << endl;

    // Check if a number is prime or not .
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    bool isPrime = true;
    for (int i = 2; i<= n-1; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime == true){
        cout<<n<<" is a prime number"<<endl;
    }
    else{
        cout<<n<<" is not a prime number"<<endl;
    }
    return 0;
    }