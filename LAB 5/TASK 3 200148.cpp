#include <iostream>
using namespace std;

class Time{
	private:
		int hours, minutes, seconds;
	public:
		Time(){
			hours =0;
			minutes =0;
			seconds =0;
		}
		Time(int h, int m, int s){
			hours =h;
			minutes =m;
			seconds =s;
		}
		Time operator==(Time t1)    
        {
            if(this->hours==t1.hours && this->minutes==t1.minutes && this->seconds==t1.seconds)
                cout<< "Time 1 = Time 2"<<endl;
            else
				cout<< "Time 1 =! Time 2"<<endl;
			return t1;
        }
        Time operator>>(Time &t1)
        {
        	cout<<"Please enter hours: ";
        	cin>>t1.hours;
        	cout<<"Please enter minutes: ";
        	cin>>t1.minutes;
        	cout<<"Please enter seconds: ";
        	cin>>t1.seconds;
        	
        	return t1;
		}
		Time operator <<(Time &t1) 
		{ 
			cout<<"The time you entered is: "<<hours<<":"<<minutes<<":"<<seconds<<endl; 
			return t1;
		}
};

int main(){
		
	Time t1,t2,t3,t4; 
	cout<<"Enter time 1. \n";
	t4>>t1; 
	cout<<endl;
	cout<<"Enter time 2. \n";
	t3>>t2; 
	cout<<endl<<endl;
	cout<<"For checking whether the two times are same or not: "<<endl;
	t1==t2; 
	cout << endl;
	t4<<t1; 
	t3<<t2; 
    return 0;
}
