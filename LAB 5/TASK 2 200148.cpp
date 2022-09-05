#include <iostream>
using namespace std;
class Complex
{
    float real;   
    float imaginary;
public:
    Complex() 
	{
		real=0;
		imaginary=0;
	}
    Complex(float r, float i)
    {
        real = r;
        imaginary = i;
    }
    Complex operator-(Complex comp)
    {
        Complex temp; 
        temp.real = real - comp.real;
        temp.imaginary = imaginary - comp.imaginary;
        return temp;
    }
    Complex operator*(Complex comp)
    {
        Complex temp; 
        temp.real = real * comp.real;
        return temp;
    }
    void display()
    {
        cout << real << " - " << imaginary << "i" << endl;
    }
    void display1()
    {
        cout << real <<  endl;
    }
};
int main()
{
    Complex cmp1(10, 20);
    Complex cmp2(20, 10);
    Complex cmp3 = cmp1 - cmp2;
    Complex cmp4 = cmp1 * cmp2;
    cout << "Complex Number 1 : ";
    cmp1.display();
    cout << "Complex Number 2 : ";
    cmp2.display();
    cout << "Complex Number 1 - Complex Number 2 : ";
    cmp3.display();
    cout << "Real Parts only\nComplex Number 1 * Complex Number 2 : ";
    cmp4.display1();
    
    return 0;
}
