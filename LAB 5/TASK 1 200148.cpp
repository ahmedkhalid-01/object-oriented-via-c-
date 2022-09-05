#include <iostream>
#include <conio.h>
using namespace std;

class Number
{
  private:
    int x;
  public:
    Number(int a)
	{
    	x=a;
    }
    Number operator -- (int)
    {
        x--;
        return x;
    }
    Number operator -- ()
    {
        --x;
        return x;
    }
    Number operator ++ (int)
    {
    	x++;
    	return x;
	}
	Number operator ++ ()
    {
        ++x;
        return x;
    }
    int Display()
    { 
	cout << "x = "<< x <<endl;
	}
};

int main()
{
    Number N(10);
    cout<<"Number Declared is: ";
    N.Display();
    cout<<"After postfix decrement number: ";
    N--;
    N.Display();
    cout<<"After prefix decrement number: ";
    --N;
    N.Display();
    cout<<"After postfix increment number: ";
    N++;
    N.Display();
    cout<<"After prefix increment number: ";
    ++N;
    N.Display();    
    getch;
    return 0;
}
