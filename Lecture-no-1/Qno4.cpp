// Given a Person's age, find if they should get a driving license or not.

#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<< "Enter the Person Age: ";
    cin>>age;
    if(age >= 18){
        cout<<" You are eligible for driving license ";
    }
    else{
        cout<<" You are not eligible for driving license ";
    }
}