#include<iostream>
#include<stdlib.h>
using namespace std;

// Copy Consturctor usnig inheritance.
class Base {
	int a;
	public:
		Base(int a):a(a){ // Implicit Copy Constructor.
		
			cout<<"\n\n a: "<<a;
		} 
};
class Drived: public Base
{
	int b;
	public:
		Drived(int x,int y): Base(x), b(y)
			{
				cout<<"\n\n b: "<<b;
			}
};
main(){
    
    Drived d(10, 20);
	return 0;
	
}
