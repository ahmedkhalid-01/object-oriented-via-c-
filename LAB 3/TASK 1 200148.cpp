#include <iostream>
#include <cmath>
using namespace std;

class POINT // Created class POINT
{
	private:
		float x_coordinate;
		float y_coordinate;
		
	public:

	POINT ( ) // Default Created Constructor
	{
		x_coordinate = 0;
		y_coordinate = 0;	
	}
			
	POINT ( float x , float y ) // Parametrized constructor 
	{
		x_coordinate = x;
		y_coordinate = y;	
	}
	
	float Distance ( POINT P1 , POINT P2 ) // Calculating the distance from point 1 to point 2
	{
		float num3,num4,num5,num6,num7,num8;
		num4 = P2.x_coordinate - P1.x_coordinate;
		num5 = pow ( num4 , 2 );
		num6 = P2.y_coordinate - P1.y_coordinate;
		num7 = pow ( num6 , 2 );
		num8 = num5+num7;
	    return sqrt(num8);
	}
	
	void MidPoint ( POINT P1 , POINT P2 ) // Calculating Midpoint using formula
	{
		float num3,num4,num5;
		num4 = P1.x_coordinate + P1.x_coordinate;
		num4 = num4/2;
		num5 = P2.y_coordinate + P1.y_coordinate;
		num5 = num5/2;
		cout<<"The midpoint of the two points is : "<<"( "<<num4<<" , "<<num5<<" )"<<endl;
	}
	
	float isZero ( POINT P ) // To check if any coordinate is on origin
    {
		if ( P.x_coordinate == 0 && P.y_coordinate == 0 )
		{
			cout<<" is zero"<<endl;
		}
		else
		{
			cout<<" is not zero"<<endl;	
    	}
	}
	
    float isHorizontal ( POINT P ) // To check if horizontal when y=0
    {
    	if( P.y_coordinate == 0 )
        {
        	cout<<" is horizontal"<<endl;
		}
		else
		{
		cout<<" is not horizontal"<<endl;
		}
	}
	
	float isVertical ( POINT P ) // To check if vertical when x=0
    {
    	if( P.x_coordinate == 0 )
        {
        	cout<<" is vetical"<<endl;
		}
		else
		{
		cout<<" is not vertical"<<endl;
		}
	}
	
	void isEqualTo ( POINT P1 , POINT P2 ) // For to check if points are equal
	{
	    if ( P1.x_coordinate == P2.x_coordinate && P1.y_coordinate == P2.y_coordinate )
		{
			cout<<"Both points are equal"<<endl;
		}	
		else
		{
			cout<<"Both points are not equal"<<endl;
		}
	}
	
	float distance_origin ( POINT P ) // For greater than command finding distance from origin
	    {
	    	float num4,num5,num6,num7;
	    	num4 = P.x_coordinate*2;
	    	num5 = P.y_coordinate*2;
	    	num6= num4+num5;
	    	return sqrt( num6 );
		}
		
	bool isGreaterThan ( float distance1 , float distance2 ) // Using func distance from origin 
		{
			if ( distance1 > distance2 )
			{
				cout<<"Point number 1 is greater than point number 2";
				return true;
			}
			if ( distance1 < distance2 )
			{
				cout<<"Point number 1 is smaller than point number 2";
				return false;
			}
			if ( distance1 == distance2)
			{
				cout<<"Point number 1 is the same as point number 2";
			}
		}
};

int main() 
{
	float x1,x2,y1,y2,distance1,distance2,dis;
	cout<<"Enter the x-coordinate for point number 1 : ";
	cin>>x1;
	cout<<"Enter the x-coordinate for point number 2 : ";
	cin>>x2;
	cout<<"Enter the y-coordinate for point number 1 : ";
	cin>>y1;
	cout<<"Enter the y-coordinate for point number 2 : ";
	cin>>y2;
	
	cout <<endl <<endl;
	POINT P1( x1 , y1 );
	POINT P2( x2 , y2 );
	POINT num3;
	
	dis = num3.Distance( P1 , P2 ); // Calling function distance
	cout<<"The distance between the two points is : "<<dis<<endl<<endl;
	
	num3.MidPoint( P1 , P2 ); // Calling function midpoint
	cout <<endl <<endl;
	
	cout<<"Point number 1 ";
	num3.isZero( P1 ); // Calling function iszero
	cout<<"Point number 2 ";
	num3.isZero( P2 );
	cout <<endl <<endl;
	
	cout<<"Point number 1 ";
	num3.isHorizontal( P1 ); // Calling function ishorizontal
	cout<<"Point number 2 ";
	num3.isHorizontal( P2 );
	cout <<endl <<endl;
	
	cout<<"Point number 1 ";
	num3.isVertical( P1 ); // Calling function isvertical
	cout<<"Point number 2 ";
	num3.isVertical( P2 );
	cout <<endl <<endl;

	num3.isEqualTo ( P1 , P2 ); // Calling function isequalto
	
	distance1 = num3.distance_origin ( P1 );
    distance2 = num3.distance_origin ( P2 );
	cout <<endl <<endl;
	num3.isGreaterThan ( distance1 , distance2 ); // Calling function isgreaterthan
	cout <<endl <<endl;

	return 0;
}
