#include<iostream>
using namespace std;

class GrandParent
{
	int gp;
	public:
		GrandParent(): gp(0)
		{
			cout<<"\n\n gp: "<<gp;
		}
};
class Parent: public GrandParent
{
	int p;
	public: 
		Parent(): GrandParent() ,p(10)
		{
			cout<<"\n\n p: "<<p;
		}
};
class child: public Parent{
	int c;
	public:
		child(): Parent(), c(20)
		{
			cout<<"\n\n c:"<<c;
		}
};
main()
{
	child obj;
	
	return  0;
}
