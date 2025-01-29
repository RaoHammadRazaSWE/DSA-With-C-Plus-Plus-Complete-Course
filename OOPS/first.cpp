#include<iostream>
using namespace std;

class Student{
    string name;

    public:
    int age;
    bool gender ;

    // Default Const:
    Student(){
        cout<<"Default constructor"<<endl;
    }

    // Create Parameterised Constructor is call ho ta ja ta hai khudi

    Student(string s, int a, bool g){
        cout << "Parameterized constructor" << endl;
        name = s;
        age = a;
        gender = g;
    } 

    // Copy Constructor:
    Student(Student &a){
        cout << "Copy constructor" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    ~Student(){
        cout << "Destructor Called" << endl;
    }

// This is set Function:
    void setName(string s){
        name = s;
    }

// This is get Function:

    void getName(){
        cout<<name<<endl;
    }

    void printInfo(){
        cout<<"Name = "<<name<<endl;
        cout<<"Age = "<<age<<endl;
        cout<<"Gender = "<<(gender ? "M" : "F")<<endl;

    }

    bool operator == (Student &a){
        if(name == a.name && age == a.age && gender == a.gender){
            return true;
        }
        return false;
    }
};

int main() {

// It is very def to work as more student data .
    // student a;
    // a.name = 'Rao';
    // a.age = 20;
    // a.gender = 1;

// Using Array in this code

    // Student arr[3];
    // for (int i = 0; i < 3; i++)
    // {
    //     string s;
    //     cout<<"Name = ";
    //     cin>>s;
    //     arr[i].setName(s);
    //     cout << "Age = ";
    //     cin >> arr[i].age;
    //     cout << "Gender = ";
    //     cin >> arr[i].gender;
    // }

    // for (int i=0; i<3; i++) {
    //     arr[i].printInfo();
    //     cout<<endl;
    // }

    Student a("Hammed", 20, 1);
    // a.printInfo();
    Student b;
    Student c = a;

    if(c==a){
        cout<<"Both are same"<<endl;
    }
    else
    {
        cout<<"Both are not same"<<endl;
    }
return 0;
} 
