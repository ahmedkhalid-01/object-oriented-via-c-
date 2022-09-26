#include <iostream>
#include <exception>
using namespace std;

int main(){

    double a, b, c;
    cout << "Enter the value of a: ";
    cin>>a;
    cout << "Enter the value of b: ";
    cin>>b;

    try {
        if (b == 0){
        	throw c;
			         
        } 
		else{
			c = a / b;
            cout << "Result is: " << c;
        }
    } 
	catch (double c){
        cout << "\nException caught.\nAs we have b = "<<b<<".";
    }
    return 0;
}
