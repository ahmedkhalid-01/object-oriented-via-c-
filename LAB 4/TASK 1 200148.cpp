#include <iostream>
#include<string>

using namespace std;

	class Television{
		
	public:
		bool power_button;//for on/off
		int count_power_button;//count button is press already or not
		int channel_button; //for channel setting
		int no_of_channel;
		int volume_button; //for volumne setting
		int cable_tuning; //cabel or antena setting
		int TVinput; //for TV/AV selection
	
	Television(){
		
		power_button =false;
		channel_button = 0; //channel can be zero
		volume_button = 0; //volume can be zero
		no_of_channel =100;
		count_power_button=0;
		TVinput=0;
		cable_tuning=0;
	}
	
	//function for channel setting
	
	void channel_setting (int button){

	if(button ==0)//for channel up
	{
		channel_button=channel_button+1;
		cout<<"channel is at "<<channel_button<<endl;
	}
	
	else{
	//for channel down
		int re = channel_button- 1;
		
		if(re<0)
		{
			channel_button = no_of_channel - re;
		}
		
		else
		{
			channel_button = re;
		}
	
	cout<<"channel is at "<<channel_button<<endl;
	}
	}
	
	//for power on off
	void on_Off(){
		
		if(count_power_button==1)
		{
			power_button=false;
			count_power_button =0;
			cout<<"Power is OFF"<<endl;
		}
		
		else
		{
		power_button=true;
		count_power_button++;
		cout<<"Power is ON"<<endl;
		}
		
	}
	
	//for volumne setting
	void volume_setting(int button){
	
		if(button ==0)//for volume up
		
		{
			volume_button=volume_button+1;
			cout<<"Volume is at "<<volume_button<<endl;
		}
		
		else
		{
			
			//for volume down
			int re = channel_button- 1;
			
			if(re<0)
			{
				volume_button = 0;
			}
			
			else
			{
				volume_button = re;
			}
			
			cout<<"Volume is at "<<volume_button<<endl;
		}
		
	}
	
	//for tuning mode on off
	void tuning_mode(int choice){
		
		if(choice==0) //for cable link
		{	
			cable_tuning = 1;//thats means cable plugged
			cout<<"cable plugged"<<endl;
		}
		
		else
		{
		cable_tuning = 2;//thats means Antena plugged
		cout<<"Antena plugged"<<endl;
		}
		
	}
	
	//for TV input
	
	void TV_input(int choice){
		
		if(choice==0)    //for cable link
		{  
			TVinput = 1;//thats means TV mode
			cout<<"TV mode"<<endl;
		}
		
		else
		{
			TVinput = 2;//thats means AV mode
			cout<<"AV mode"<<endl;
		}
		
	}

};

class TVremote : public Television {

	public:
	
	//function for channel setting
	void channel_setting_remote(int button){
	
	if(button ==0)//for channel up
	{
		channel_button=channel_button+1;
		cout<<"channel is at "<<channel_button<<endl;
	}
	
	else
	{
		//for channel down
		int re = channel_button- 1;
		
		if(re<0)
		{
		channel_button = no_of_channel - re;
		}
		
		else
		{
		channel_button = re;
		}
		
		cout<<"channel is at "<<channel_button<<endl;
	}
	}
	
	//for power on off
	void on_Off_remote(){
		
		if(count_power_button==1)
		{
			power_button=false;
			count_power_button =0;
			cout<<"Power is OFF"<<endl;	
		}
		
		else
		{
		power_button=true;
		count_power_button++;
		cout<<"Power is ON"<<endl;
		}
		
	}
	
	//for volumne setting
	void volume_setting_remote(int button){
		
		if(button ==0)//for volume up
		{
			volume_button=volume_button+1;
			cout<<"Volume is at "<<volume_button<<endl;
		}
		
		else
		{
			//for volume down
			int re = channel_button- 1;
			
			if(re<0)
			{
				volume_button = 0;
			}
			
			else
			{
				volume_button = re;
			}
			cout<<"Volume is at "<<volume_button<<endl;
		}
	}
	
	//for tuning mode on off
	void tuning_mode_remote(int choice){
		
		if(choice==0)  //for cable link
		{
			cable_tuning = 1;//thats means cable plugged
			cout<<"cable plugged"<<endl;	
		}
		
		else
		{
			cable_tuning = 2;//thats means Antena plugged
			cout<<"Antena plugged"<<endl;
		}
		
	}
	
	//for TV input
	void TV_input_remote(int choice){
		
		if(choice==0)  //for cable link
		{
			TVinput = 1;//thats means TV mode
			cout<<"TV mode"<<endl;	
		}
		
		else
		{
			TVinput = 2;//thats means AV mode
			cout<<"AV mode"<<endl;
		}
	}

};

void menu(){
	
	cout<<"=============================================="<<endl;
	cout<<"== YOUR TV =="<<endl;
	cout<<"=============================================="<<endl;
}

void menu_option(){
	
	cout<<"1. Volume setting"<<endl;
	cout<<"2. Channel setting"<<endl;
	cout<<"3. Mode"<<endl;
	cout<<"4. Input"<<endl;
	cout<<"Enter your choice : "<<endl;
}

int main(){

	Television t;
	TVremote tr;
	
	//for enter choice between TV or remote
	int ch;
	//for choice in options
	int ch1;
	//for loop condition
	int ch3=1;
	
	//main Menu
	menu();
	
	cout<<"1. By Television "<<endl;
	cout<<"2. By Remote"<<endl;
	cout<<"Please Enter your choice :"<<endl;
	cin>>ch;
	cout<<"================================"<<endl;
	
	if(ch==1)
	{
		
		int s;
		cout<<"for turn ON TV press 1"<<endl;
		cin>>s;
		
		if(s==1)
		{
			
			t.on_Off();
			
			do
			{
				
				menu_option();
				
				cin>>ch1;
				
				if(ch1==1)
				{
					int b;//choice in button
					cout<<"For Volume UP press 0 and for Volume down press 1"<<endl;
					cin>>b;
					t.volume_setting(b);
				}
					
				else if(ch1==2)
				{
					int b;//choice in button
					cout<<"For Channel UP press 0 and for Channel down press 1"<<endl;
					cin>>b;
					t.channel_setting(b);
				}
					
				else if(ch1==3)
				{
					int b;//choice in button
					cout<<"For Cable press 0 and for Antena press 1"<<endl;
					cin>>b;
					t.tuning_mode(b);
				}
					
				else if(ch1==4)
				{
					int b;//choice in button
					cout<<"For TV press 0 and for AV press 1"<<endl;
					cin>>b;
					t.TV_input(b);
				}
				
				else
				{
					cout<<"invalid input PLease try again..."<<endl;
				}
				
				cout<<"do you want to continue then press 0 otherwise 1 :"<<endl;
				cin>>ch3;
			}
			while(ch3==0);
		}
		
		else
		{
			cout<<"TV is not Turned ON"<<endl;
		}
		
	}
	
	else if(ch==2)
	{
		int s;
		cout<<"for turn ON TV press 1"<<endl;	
		cin>>s;

		if(s==1)
		{
			tr.on_Off_remote();
			
			do
			{
				
				menu_option();
				cin>>ch1;
				
				if(ch1==1)
				{
					int b;//choice in button
					cout<<"For Volume UP press 0 and for Volume down press 1"<<endl;
					cin>>b;
					tr.volume_setting_remote(b);
				}
				
				else if(ch1==2)
				{
					int b;//choice in button
					cout<<"For Channel UP press 0 and for Channel down press 1"<<endl;
					cin>>b;
					tr.channel_setting_remote(b);
				}
		
				
				else if(ch1==3)
				{
					int b;//choice in button
					cout<<"For Cable press 0 and for Antena press 1"<<endl;
					cin>>b;
					tr.tuning_mode_remote(b);
				}
				
				else if(ch1==4)
				{	
					int b;//choice in button	
					cout<<"For TV press 0 and for AV press 1"<<endl;
					cin>>b;
					tr.TV_input_remote(b);
				}
				
				else
				{
					cout<<"invalid input PLease try again..."<<endl;
				}
				
				cout<<"do you want to continue then press 0 otherwise 1 :"<<endl;
				cin>>ch3;
				
			}
			while(ch3==0);
			
		}
		
		else
		{
		cout<<"TV is not Turned ON"<<endl;
		}
	}
	return 0;
}
