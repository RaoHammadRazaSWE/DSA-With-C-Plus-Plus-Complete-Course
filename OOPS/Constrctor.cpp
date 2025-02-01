#include<iostream>
#include<stdlib.h>
using namespace std;
// Default Constructor: 
//class Base {
//	int a;
//	public:
//		Base(){
//			a = 10;
//			cout<<"\n\n a: "<<a;
//		}
//};

class Base {
	int a;
	public:
		Base(int n){
			a = n;
		}
		Base(Base &obj){ // Implicit Copy Constructor.
			a = obj.a;
			cout<<"\n\n a: "<<a;
		}
};
main(){
//	Base b;
	Base b1(20);
	Base b2(b1);
	return 0;
	
}
