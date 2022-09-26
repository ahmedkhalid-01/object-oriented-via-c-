#include <iostream>
#include <exception>
#include <string>
using namespace std;

class SmartPtr{
	int *ptr;
	
	public:
		void display(){
			cout<< "\nAhmed Khalid\n";
		}
		SmartPtr (int *p = NULL){
			ptr=p;
		}
		~SmartPtr(){
			delete(ptr);
		}
		int &operator*(){
			return *ptr;
		}
};

int main(){
	SmartPtr ptr (new int());
	*ptr=200148;
	cout<<*ptr;
return 0;
}
