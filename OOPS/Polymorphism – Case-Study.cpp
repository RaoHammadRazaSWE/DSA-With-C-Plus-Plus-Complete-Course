#include<iostream>
using namespace std;
class Person // Abstract class
{
	int id;
	string name;
	public:
		Person(int i, string n){
			id = i;
			name = n;
		}
		virtual int getId(){
			return id;
		}
		virtual string getName()
		{
			return name;
		}
		virtual void display() = 0;
};
class Student : public Person // Concret class
{
	float marks;
	public:
		Student(int i, string n, float m): Person(i, n)
		{
			marks = m;
		}
		void display(){
			cout<<"*** Student Record ***";
			cout<<"\n\n Student ID: "<<getId();
			cout<<"\n\n Student Name: "<<getName();
			cout<<"\n\n Student Marks: "<<marks;
		}
};

class Teacher: public Person{ // Concret class
	string qualification;
	public:
		Teacher(int i, string n, string q): Person(i, n)
		{
			qualification = q;
		}
		void display(){
			cout<<"\n\n\n *** Teacher Record ***";
			cout<<"\n\n Teacher ID: "<<getId();
			cout<<"\n\n Teacher Name: "<<getName();
			cout<<"\n\n Teacher Qualification: "<<qualification;
		}
		
};
	
main(){

	Person *p[2]; // p[0] p[1]
	p[0] = new Student(100, "Rao", 3.2);
	p[1] = new Teacher(101, "Raza", "SWE");
	p[0] -> display();
	p[1] -> display();
	
	return 0;
}
