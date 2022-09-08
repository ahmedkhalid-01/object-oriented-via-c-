#include <iostream>
using namespace std;

class Mammals{
	
	public:
		void mammal(){
			cout<<"Iam a mammal. ";
		}
};

class MarineAnimals{
	
	public:
		void marine(){
			cout<<"Iam a Marine Animal. ";
		}	
};

class BlueWhale: public Mammals, public MarineAnimals{
	
	public:
		void whale(){
			cout<<"I belong to both the categories: Mammals as well as Marine animals. ";
		}	
};

int main(){
	
	Mammals M;
	MarineAnimals A;
	BlueWhale W;
	
	cout<< "Calling classes functions by their on object: "<<endl;
	M.mammal();
	cout<< endl;
	A.marine();
	cout<< endl;
	W.whale();
	cout<< endl<<endl;
	
	cout << "Calling function of parent classes by object of their child class: "<<endl;
	W.mammal();
	cout<< endl;
	W.marine();
	cout<< endl;
	
	return 0;
}
