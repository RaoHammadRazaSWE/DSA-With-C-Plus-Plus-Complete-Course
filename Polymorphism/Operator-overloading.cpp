#include <iostream>
using namespace std;

class complex {
    private:
    int real , imag;
    // Create Constrator:
    public:
        complex(int r = 0, int i = 0){
            real = r;
            imag = i;
        }
    // Write code operator overloading:
    complex operator + (complex const &obj){ // By Refrance.
        complex res;
        res.imag = imag + obj.imag;
        res.real = real + obj.real;
        return res;
    }

    // Create member function for print result k liya:
    void display(){
        cout << real << " + i"<< imag << endl;
    }
};
int main() {

    complex c1(5,7), c2(6,7);
    complex c3 = c1 + c2;
    c3.display();
    return 0;
}