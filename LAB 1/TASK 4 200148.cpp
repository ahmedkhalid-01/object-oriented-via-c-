#include <iostream>
using namespace std;

struct Cylinder{
	float radius;
	float height;
	
	float SA(float radius, float height){
		float A;
		A = ((2*3.14)*radius)*(radius+height);
		return A;
	}
	float V(float radius, float height){
		float B;
		B = 2*3.14*radius*height;
		return B;
	}
};

int main(){
	
	Cylinder C1, C2, C3, C4;
	
	cout << "Taking input of radius and height of cylinder\n\n Radius: ";
	cin >> C1.radius;
	cout <<  "\n Height: ";
	cin >>C2.height;
	
	//printing out surface area and volume after calculating using formulas in structure 
	
	cout << "\n\n Surface Area of Cylinder is: " <<C3.SA(C1.radius, C2.height) << endl;
	cout << "\n\n Volume of Cylinder is: " <<C4.V(C1.radius, C2.height) << endl;
	
	return 0;
}
