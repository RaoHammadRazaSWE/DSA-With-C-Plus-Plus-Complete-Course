#include<iostream>
#include<stdlib.h>
using namespace std;

// Casting Operators:

// static_cast is used " Base class to drived class" another way downcasting.

// dynamic_cast is used " drived class to base class" another way upcasting

// reinterpret_cast is used " base class to drived class" another way downcasting.

// const_cast is used " const character array ki casting "
class Base {
	public:
		void myFunction(){
			cout<<"\n\n Base Class Function";
		}
};
class Drived: public Base
{
	public:
		void myFunction(){
			cout<<"\n\n Drived Class Function";
		}
};

// const_cast
	void print(char * str)
	{
		cout<<"\n\n "<<str;
	}
main(){
    
    // static_cast
//    Base *b = new Drived;
//    b -> myFunction();
//    Drived *d = static_cast<Drived*>(b);
//    d -> myFunction();

	// reinterpret_cast:
//	Base *b = new Drived;
//    b -> myFunction();
//    Drived *d = reinterpret_cast<Drived*>(b);
//    d -> myFunction();

	// dynamic_cast;
//	Drived *d = new Drived;
//	d -> myFunction();
//	Base *b = dynamic_cast<Base*>(d);
//	b -> myFunction();

	// Const_cast:
	const char *array  = "My Name is Rao";
	print(const_cast<char*>(array));
	
	return 0;
	
}
