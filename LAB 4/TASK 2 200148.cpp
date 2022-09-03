#include <iostream>
using namespace std;

// declaring classes
class two;
class one
{
    int x;
    public:
    // using friend function as asked
	friend void max(one,two);
};

class two
{
    int y;
    public:
	friend void max(one,two);
};
        
void max(one x,two y)
{
    // declaring number1 and number2
    int num1,num2;

    cout << "Enter any positive integer: ";
    // taking input
    cin >> num1;

    x.x=num1;
    cout << "Enter any positive integer: ";
    cin >> num2;

    y.y=num2;
    cout<<"\nFirst no: "<<x.x;
    cout<<"\nSecond no: "<<y.y;
    
	// comparing the numbers
    if(x.x>y.y)
    {
        cout<<"\n\n"<<x.x<<" is maximum";
    }
    else
    {
        cout<<"\n\n"<<y.y<<" is maximum";
    }
}

int main()
{
	one O;
	two T;
    max(O,T);
}
