#include<iostream>
using namespace std;

// Functions overloading:
class A {
    public:
    void fun()
    {
        cout<<"I am a function with no arguments"<<endl;
    }

    void fun(int x)
    {
        cout << "I am a function with int arguments" << endl;
    }

    void fun(double x)
    {
        cout<<"I am a function with double argument"<<endl;
    }
};
int main()
{
    A obj;
    obj.fun();
    obj.fun(10);
    obj.fun(10.5);

    return 0;
}