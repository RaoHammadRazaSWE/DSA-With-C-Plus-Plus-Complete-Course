#include<iostream>
using namespace std;

// Function Overloading : within Same class ma ki jati hai .
//
//class Base
//{
//	public:
//		void sum(int a, int b){
//			cout<<"\n\n Sum is : "<<a+b;
//		}
//		void sum(int a, int b,int c){
//			cout<<"\n\n Sum is : "<<a+b+c;
//		}
//};

// Function Overriding : within Base & Drived  Class Ya parent aur child class ma ke jati hai.


class Base
{
	public:
		void sum(int a, int b){
			cout<<"\n\n Sum is : "<<a+b;
		}
};

class Drived: public Base {
	public: 
		void sum(int a, int b)
		{
			Base::sum(a,b); // a, b ke place koi aur value bhi write kr sakta hai aap.
			cout<<"\n\n Sum is : "<<a+b;
		}
};
main(){
	
	// Ex : function overloading.
	
//	Base b;
//	b.sum(10, 20);// call first function jis ma two argument hai.
//	b.sum(10, 20,30);
	
	// Ex : function overriding.
	
	Drived d;
	d.sum(12, 34);
	return 0;
}
