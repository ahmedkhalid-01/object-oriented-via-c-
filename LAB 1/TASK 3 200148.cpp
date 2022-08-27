#include <iostream>
#include <cmath>
using namespace std;

// Create a structure for complex number
struct complexNumber
{
	int real;  // Used to store real part
	int imaginary;  // Used to store imaginary part
	//declaring a function as return type function name (parameter list)
	double mod(int real,int imaginary)//creating a function named mod for greater than command 
	//2 parameters  
	{
		return sqrt((imaginary*imaginary)+(real*real));  
	}
};

// Function to take inputs complex number
void take_input(complexNumber &c)
{
	cout << "Enter real part: ";
	cin >> c.real;
	
	cout << "Enter imaginary part: ";
	cin >> c.imaginary;
}

// Function to check complex number is zero or not
int isZero(complexNumber c)
{
	// If real & imaginary part both are 0
	if(c.real == 0 && c.imaginary == 0) 
	// Number is zero so return 1 else return 0
	return 1;
	
	else
	return 0;
}

// Function to compare two complexNumber for greater than
int isGreaterThan(complexNumber c1, complexNumber c2)
{
	//if num 1 is greater  
	if (c1.mod(c1.real,c1.imaginary)>c2.mod(c2.real,c2.imaginary))
	return 1;
	//if num 2 is greater
	else 
	return 0;
}

// Function to add two complex Number
complexNumber Add(complexNumber c1, complexNumber c2)
{
	// Used to store sum of two complex Number
	complexNumber c3;

	c3.real = c1.real + c2.real;
	c3.imaginary = c1.imaginary + c2.imaginary;
	  
	return c3;
}

int main()
{
	// Create three complex number
	complexNumber c1, c2, c3;
	  
	// Output first complex number
	cout << "First complex number" << endl;
	take_input(c1);
	  
	// Output second complex number
	cout << endl << "Second complex number" << endl;
	take_input(c2);
	  
	// If first complex number is zero
	if(isZero(c1))
	  
	// Print First complex number is zero
	cout << endl << "First complex number is zero" << endl;
	  
	// If first complex number is not zero
	else
	  
	// Print First complex number is not zero
	cout << endl << "First complex number is not zero" << endl;
	  
	// calling function and If c1 is greater than c2
	if(isGreaterThan(c1, c2))
	  
	// Print c1 is greater than c2
	cout << endl << "First complex number is greater than second complex number" << endl;
	  
	// If c1 is less than c2
	else
	  
	// Print c2 is greater than c1
	cout << endl << "Second complex number is greater than first complex number" << endl;
	  
	// Call function to find sum of c1 & c2
	c3 = Add(c1, c2);
	  
	// Print sum of two complex numbers
	cout << endl << "The sum of two complex number is: " << c3.real << "+i" << c3.imaginary << endl;
	
	return 0;
}
