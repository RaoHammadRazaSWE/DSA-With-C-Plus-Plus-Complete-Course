#include<iostream>
using namespace std;
class Base{
	
	private:
		int a;
	protected:
		int b;
	public:
		void getData(){
			
			a = 10;
			b = 20;
			cout<<"\n\n a: "<<a<<"\tb: "<<b;
		}	
};

//class Drived: public Base{
//	public:
//		void getData()
//		{
//			b = 25;
//			Base::getData();
//		}
//};

//class Drived: protected Base{
//	public:
//		void getData()
//		{
//			Base::getData();
//		}
//};

class Drived: private Base{
	public:
		void getData()
		{
			Base::getData();
		}
};
main(){
	Drived d;
	d.getData(); // 1
	d.Base::getData(); // 2 Error
	return 0;
}
