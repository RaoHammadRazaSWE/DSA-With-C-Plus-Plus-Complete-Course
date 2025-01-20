#include <iostream>
using namespace std;

// Pass by value : Copy of argument is passed to function.
// int sum (int a , int b) {
//     return a + b;
// }

// int main(){
//     int x = 5, y = 4;
//     cout << sum(x, y) << endl;

void changeX(int x){
    x = 2 * x;
    cout << "x = "<< x << endl;
}
int main() {
    int x = 5;
    changeX(x);

    cout << " x = "<< x << endl;
    return 0;
}