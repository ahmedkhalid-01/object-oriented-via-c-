#include <iostream>
using namespace std;

struct Rectangle {
	float lenght;
	float width;
	
	float area (float lenght, float width){
		float rectA;
		rectA = lenght*width;
		return rectA;
	}
};

int main(){
	
	Rectangle R1, R2, R3;
	
	//taking input
	
	cout<<"Enter radius of the cylinder: ";
	cin>>R1.lenght;
	cout<<"\nEnter height of the cylinder: ";
	cin>>R2.width;
	
	//Printing outputs
	cout << "\nArea of first Rectangle is: " <<R3.area(R1.lenght, R2.width) << endl;
	
	Rectangle R11, R22, R33;
	R11.lenght= 196;
	R22.width= 700;
	
	cout << "\nArea of second Rectangle is: " <<R33.area(R11.lenght, R22.width) << endl<< endl;
	
// comparing both rectangles
	
	cout<< "Checking which is of the rectangles area is larger: " << endl;
	
	if (R3.area(R1.lenght, R2.width)>R33.area(R11.lenght, R22.width))
	cout << "First is larger" ;
	
	else 
	cout << "Second is larger" ;
	
	return 0;
}
