#include <iostream>
using namespace std;
 
class twoD{
	
	public:
		double radius;
		
};

class square: public twoD{
	public:
		void area(){
			double a;
			radius=5;
			a= radius*radius;
			cout<< "The area of square is: "<<a;
			cout <<endl <<endl;
		}
		void perimeter(){
			double p;
			radius=5;
			p= radius*4;
			cout<< "The perimetre of square is: "<<p;
			cout <<endl <<endl;
		}
};


class circle: public twoD{
	public:
		void area(){
			double a;
			radius=5;
			a= 3.14*radius*radius;
			cout<< "The area of circle is: "<<a;
			cout <<endl <<endl;
		}
		void perimeter(){
			double p;
			radius=5;
			p= radius*2*3.14;
			cout<< "The perimetre of circle is: "<<p;
			cout <<endl <<endl;
		}
};

class threeD{
	
	public:
		double radius;

};

class cube: public threeD{
	public:
		void Sarea(){
			double a;
			radius=5;
			a= 6*radius*radius;
			cout<< "The surface area of cube is: "<<a;
			cout <<endl <<endl;
		}
		void volume(){
			double v;
			radius=5;
			v= radius*radius*radius;
			cout<< "The volume of cube is: "<<v;
			cout <<endl <<endl;
		}
};


class sphere: public threeD{
	public:
		void Sarea(){
			double a;
			radius=5;
			a= 4*3.14*radius*radius;
			cout<< "The surface area of sphere is: "<<a;
			cout <<endl <<endl;
		}
		void volume(){
			double v;
			radius=5;
			v= radius*radius*radius*(4/3)*3.14;
			cout<< "The volume of sphere is: "<<v;
			cout <<endl <<endl;
		}
};

int main(){
	cout << "\tTHE RADIUS I USED IS 5"<<endl << endl;
	square T1;
	circle T2;
	cube T3;
	sphere T4;
	T1.area();
	T1.perimeter();
	T2.area();
	T2.perimeter();
	T3.Sarea();
	T3.volume();
	T4.Sarea();
	T4.volume();
}
