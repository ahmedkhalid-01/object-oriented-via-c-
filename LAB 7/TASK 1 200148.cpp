#include <iostream>
#include<string>
using namespace std;

class person{
	
	public:
		string name;
		int age;
		
		person(string name, int age){
			name=name;
			age=age;
			cout<<name;
			cout<<" 1 ";
			cout<<age;
			cout<<endl;
		}

		
};

class student: public person{
	
	public:
		student(string name, int age):person (name,age){
			cout<<name;
			cout<<" 2 ";
			cout<<age;
			cout<<endl;
		}
	
	
};


class faculty: public person{
	
	public:
		faculty(string name, int age):person (name,age){
			cout<<name;
			cout<<" 3 ";
			cout<<age;
			cout<<endl;
		}
	
};


class TA: public student, public faculty{
	
	public:
		TA(string name, int age):student (name,age),faculty (name,age){
	
			cout<<name;
			cout<<" 4 ";
			cout<<age;
			cout<<endl;
		}
	
};

int main(){
	
	TA T("Ahmed", 20);
	
	return 0;

}
