#include<iostream>
using namespace std;
class Shape
{
	public:
		virtual void draw(){
			cout<<"\n\n Draw Function of Shape Class ";
		}
};
class Line: public Shape{
	public:
		void draw(){
			cout<<"\n\n Draw Function of Line Class ";
		}
};

class Circle: public Shape{
	public:
		void draw(){
			cout<<"\n\n Draw Function of Circle Class ";
		}
};

class Triangle: public Shape{
	public:
		void draw(){
			cout<<"\n\n Draw Function of Triangle Class ";
		}
};
main()
{
	Shape *s;
	s = new Line;
	s -> draw();
	s = new Circle;
	s -> draw();
	s = new Triangle;
	s -> draw();
	return 0;
}
