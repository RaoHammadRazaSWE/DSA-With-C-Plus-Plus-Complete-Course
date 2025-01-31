#include<iostream>
using namespace std;
class Shape { // Abstract class
	
	public:
		virtual void show(){
			cout<<"\n\n Shape Class ";
		}
		virtual void draw() = 0; // Pure Virtual Function
};
class Line: public Shape // Concreate class
{
	public:
		// Uses Pure virtual Function.
		virtual void draw(){ // Function Overriding.
			cout<< "\n\n Line Class ";
		}
		void show() // Fucntion Overriding.
		{
			cout<<"\n\n Show function in Line class ";
		}
		
};

main()
{
	Shape *s;
	s = new Line;
	s -> draw();
	s -> show();
	return 0;
}
