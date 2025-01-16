#include <iostream>
using namespace std;

// Sum of 2 number :
// int sum(int a, int b){
//     int s = a + b;
//     return s;
// }

// double sum(double a, double b)
// {
//     double s = a + b;
//     return s;
// }

// min of 2 numbers

            // This is Parameters
int  mintwonum(int a, int b){ 
    if (a < b){
        return a;
    }
    else {
        return b;
    }
}
int main(){
    // cout << sum(10.76,5.97)<< endl;

                        //This is Arguments
    cout << "min = "<< mintwonum(45, 7)<< endl;
    return 0;
}

