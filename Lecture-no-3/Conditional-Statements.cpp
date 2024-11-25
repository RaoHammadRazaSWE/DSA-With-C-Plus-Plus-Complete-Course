#include<iostream>
using namespace std;

int main() {

    // int age ;

    // if(n >= 18) {
    //     cout<<"You can vote\n";
    // }
    // else {
    //     cout<<"You can't vote\n";
    // }

    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;

    if(marks >= 90) {
        cout<<"Grade A\n";
    }
    else if(marks >= 80 && marks < 90){
        cout<<"Grade B\n";
    }
    else {
        cout<<"C\n";
    }

    return 0;
}