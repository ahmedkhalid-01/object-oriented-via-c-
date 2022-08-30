#include<iostream>
using namespace std;

class rectangle{
	
	private:
		float length;
		float width;
	public:
		float new_length;
		float new_width;
		float get_data()
	{
		cout<<"\t\tValues entered should be in range 0<lenght<21 and 0<width<21\n\n";
		cout<<"\nEnter value of length: ";
		cin>>new_length;
		cout<<"\nEnter value of width: ";
		cin>>new_width;
	}
	float set_data()
	{
		if(new_length<21&&new_length>0&&new_width<21&&new_width>0)
		{
			length=new_length;
			width=new_width;
		}
		else
		{
			cout<<"\nEntered values not in range."<<endl<<endl;
		}
	}
	float parimeter()
	{
		float perimeter;
		perimeter=(length+width)*2;
		if (perimeter==0)
		{
			cout<<"\nNo perimetre calculated "<<endl;
		}
		else
		cout<<"\nPerimeter calculated is :"<<perimeter<<endl<<endl;
	}
	float area()
	{
		float area;
		area=(length*width);
		if (area==0)
		{
			cout<<"No area calculated";
		}
		else
		cout<<"\nArea calculated is: "<<area<<endl;
	}
};

int main()
{
	char choice;
	
	do
	{
		rectangle r;
		r.get_data();
		r.set_data();
		r.area();
		r.parimeter();
		cout<<endl<< endl;
		cout<<"Do you want to repeat Y/N: ";
	    cin>>choice;
	    cout<<endl;
    }
    while(choice=='Y' || choice=='y');
}
