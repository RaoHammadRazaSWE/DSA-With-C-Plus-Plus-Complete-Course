#include<iostream>
using namespace std;
class GrandParent
{
	public:
		void print()
		{
			cout<<"\n\n Grand Parent Class ";
		}
};
class Parent: public GrandParent
{
	public: 
		void print()
		{
			cout<<"\n\n Parent Class ";
		}
};
class child: public Parent{
	public:
		void print()
		{
			cout<<"\n\n child Class: ";
		}
	};
main()
{
	child obj;
	obj.print(); // itself ko call krna
	obj.Parent::print(); // Parent class ko call krna
	obj.GrandParent::print();
	
	return  0;
}
