#include <iostream> 
using namespace std;

class Remote; 

class TV
{
	friend class remote; 
	private: 
		string on_off; 
		int channel_setting; 
		int volume_setting; 
		char cable_antenna_mode; 
		char TV_input; 
		int option; 
	 
	public: 
		void o_f(); 
		void channelnext(); 
		void channelprev(); 
		void volumeinc(); 
		void volumedec();
		void mode(); 
		void input_selection(); 
		void tv_settings();  

}; 

class remote
	{
	
	public: 
	void o_fr(TV x) 
	{ 
		cout<<"You are now performing this feature through a remote control: "<<endl<<endl;
		x.o_f();
	}
	
	void channelnextr(TV y) 
	{ 
		cout<<"You are now performing this feature through a remote control: "<<endl<<endl;
		y.channelnext();
	}
	void channelprevr(TV z) 
	{ 
		cout<<"You are now performing this feature through a remote control: "<<endl<<endl;
		z.channelprev(); 
	}
	void volumeincr(TV vi)
	{  
		cout<<"You are now performing this feature through a remote control: "<<endl<<endl;
		vi.volumeinc();
	} 
	void volumedecr(TV vd) 
	{ 
		cout<<"You are now performing this feature through a remote control: "<<endl<<endl;
		vd.volumedec();
	}
	void moder(TV mod) 
	{ 
		cout<<"You are now performing this feature through a remote control: "<<endl<<endl;
		mod.mode();
	} 
	void input_selectionr(TV i) 
	{ 
		cout<<"You are now performing this feature through a remote control: "<<endl<<endl;
		i.input_selection();
	} 
	void tv_settingsr(TV s)  
	{ 
		cout<<"You are now performing this feature through a remote control: "<<endl<<endl;
		s.tv_settings();
	} 
	void skiptochanelno()
	{ 
		int chanelno;
		cout<<"This TV provides 144 channels"<<endl;
		cout<<"Please enter the channel number you would like to skip to: "; 
		cin>>chanelno; 
		cout<<endl<<endl;
		if(chanelno>144||chanelno<1) 
		{ 
			cout<<"We are sorry to tell you that our channel provides only 144 channels"<<endl;
		} 
		else 
		{ 
			cout<<"You are now at channel number "<<chanelno<<endl;
		}
	}
	
	void for_vcr(TV n) 
		{ 
			char ch;
			if(n.TV_input=='v'||n.TV_input=='V') 
			{ 
				char o;
				do 
				{
					cout<<"Please enter P for pausing your video"<<endl; 
					cout<<"Please enter L for playing your video"<<endl;  
					cout<<"Please enter f for forwarding your video"<<endl; 
					cout<<"Please enter R for revinding your video"<<endl; 
					cin>>ch; 
					if(ch=='P'||ch=='p') 
					{ 
						cout<<"Your video has now been paused"<<endl;
					} 
					else if(ch=='L'||ch=='l') 
					{ 
						cout<<"Your video has now been played"<<endl;
					} 
					else if(ch=='f'||ch=='F') 
					{ 
						cout<<"Your video is now being forwarded"<<endl;
					} 
					else if(ch=='R'||ch=='r') 
					{ 
						cout<<"Your video is now being rewinded"<<endl;
					} 
					else 
					{
						cout<<"Please enter a letter from those mentioned above"<<endl<<endl; 
						for_vcr(n);
					}  
					cout<<"Would you likr to reperform this function Y/N: "; 
					cin>>o; 
					cout<<endl<<endl;
				} 
				while(o=='Y'||o=='y');
			}  
			else 
			cout<<"Sorry this function is only available for the VCR"<<endl;
	}
}; 


void TV::tv_settings() 
{ 	
	cout<<"The initial settings of your TV are"<<endl; 
	cout<<"Volume setting= "<<1<<endl; 
	cout<<"Channel setting= "<<1<<endl; 
	cout<<"Mode= Cable"<<endl; 
	cout<<"Input= Cable or broadcast TV"<<endl;
	cout<<endl<<endl;
}



void TV::o_f() 
{
	cout<<"Please enter whether you would want to turn your TV ON or let it remain OFF: "; 
	cin>>on_off; 
	cout<<endl; 
	if (on_off=="on"||on_off=="ON"||on_off=="On"||on_off=="oN") 
	{ 
		cout<<"Your televison is now ON"<<endl<<endl; 
	} 
	else 
	{ 
		cout<<"Your TV is OFF so you cannot proceed with any further options"<<endl<<endl; 
	}
} 



void TV::input_selection() 
{ 
	if(on_off=="on"||on_off=="ON"||on_off=="On"||on_off=="oN")
	{ 
		cout<<"Please choose between cable or Broadcast TV and a VCR"<<endl; 
		cout<<"Enter C for cable or broadcast TV and V for VCR: "; 
		cin>>TV_input; 
		cout<<endl; 
		if(TV_input=='c'||TV_input=='C') 
		{ 
			cout<<"You have selected cable or broadcast TV"<<endl; 
		} 
		else if(TV_input=='V'||TV_input=='v') 
		{ 
			cout<<"You have selected VCR"<<endl; 
			cout<<"Now please select the remote option provided for VCR any other option other than the volume ones would not be able to help you"<<endl;
		} 
		else 
		{
			cout<<"Please enter the character from those mention above "<<endl<<endl; 
			input_selection();
		}
	} 
	else  
	cout<<"Your TV is off this function cannot be performed"<<endl<<endl;
}

void TV::mode() 
{ 
	if(on_off=="on"||on_off=="ON"||on_off=="On"||on_off=="oN") 
	{
		if(TV_input=='c'||TV_input=='C') 
		cout<<"Please enter the mode for your TV"<<endl; 
		cout<<"Enter C for cable TV and enter A for Antenna"<<endl; 
		cin>>cable_antenna_mode; 
		cout<<endl; 
		if(cable_antenna_mode=='C'||cable_antenna_mode=='c') 
		{ 
			cout<<"You have selected the cable mode"<<endl;
		} 
		else if(cable_antenna_mode=='A'||cable_antenna_mode=='a') 
		{ 
			cout<<"You have selected the Antenna mode"<<endl;
		} 
		else 
		{ 
			cout<<"You have must enter A or C and not any other letter please reenter"<<endl<<endl; 
			mode(); 
		}
	}  
	else  
	cout<<"Your TV is off this function cannot be performed"<<endl<<endl;
}
 
void TV::volumeinc() 
{ 
	if(on_off=="on"||on_off=="ON"||on_off=="On"||on_off=="oN") 
	{
		int max_volume=50; 
		char opt;
		int y; 
		cout<<"Enter the initial volume: "; 
		cin>>y;
		cout<<endl;
		cout<<"Your volume is now "<<y+1<<endl<<endl; 
		cout<<"Would you like to increase the volume more if you do please enter Y: "; 
		cin>>opt; 
		cout<<endl; 
		if (opt=='Y'||opt=='y')
		{
			if(y+1>50) 
			{ 
				cout<<"Your volume cannot be increased any further as you have reached the maximum limit"<<endl;
			} 
			else  
			volumeinc();
		} 
		else 
		cout<<endl;
	}
	else  
	cout<<"Your TV is off this function cannot be performed"<<endl<<endl;
}

void TV::volumedec() 
{ 
	if(on_off=="on"||on_off=="ON"||on_off=="On"||on_off=="oN") 
	{
		int least_volume=0; 
		char opt;
		int y; 
		cout<<"Enter the initial volume: "; 
		cin>>y;
		cout<<endl;
		cout<<"Your volume is now "<<y-1<<endl<<endl; 
		cout<<"Would you like to decrease the volume more if you do please enter Y: "; 
		cin>>opt; 
		cout<<endl; 
		if (opt=='Y'||opt=='y')
		{
			if(y+1<0) 
			{ 
				cout<<"Your volume cannot be decreased any further as you have reached the minimum limit"<<endl;
			} 
			else  
			volumedec();
		} 
		else 
		cout<<endl;
	}
	else  
	cout<<"Your TV is off this function cannot be performed"<<endl<<endl;
}

void TV::channelprev() 
{
	if(on_off=="on"||on_off=="ON"||on_off=="On"||on_off=="oN")  
	{ 
		if(TV_input=='c'||TV_input=='C')
	{
		int min_channel=1; 
		char opt;
		int y; 
		cout<<"Enter the initial channel you stand at: "; 
		cin>>y;
		cout<<endl;
		cout<<"Your channel number you now stand at is "<<y-1<<endl<<endl; 
		cout<<"Would you like to move to the previous channel if you do please enter Y: "; 
		cin>>opt; 
		cout<<endl; 
		if (opt=='Y'||opt=='y')
		{
			if(y+1<1) 
			{ 
				cout<<"You cannot move to the previous channel anymore as you have reached the minimum limit of your channel"<<endl;
			} 
			else  
			channelprev();
		} 
		else 
		cout<<endl;
	} 
	}
	else  
	cout<<"Your TV is off this function cannot be performed"<<endl<<endl;
}
 
void TV::channelnext()
{ 
	if(on_off=="on"||on_off=="ON"||on_off=="On"||on_off=="oN") 
	{
		if(TV_input=='c'||TV_input=='C') 
		{
			int max_channels=144; 
			char opt;
			int y; 
			cout<<"Enter the initial cahnnel you are at: "; 
			cin>>y;
			cout<<endl;
			cout<<"You now stand at cahnnel number "<<y+1<<endl<<endl; 
			cout<<"Would you like to move to the next channel if you do please enter Y: "; 
			cin>>opt; 
			cout<<endl; 
			if (opt=='Y'||opt=='y')
			{
				if(y+1>144) 
				{ 
					cout<<"You cannot move to the next channel as you have reached the maximum limit"<<endl;
				} 
				else  
				channelnext();
			} 
			else 
			cout<<endl;
		}
	} 
	else  
	cout<<"Your TV is off this function cannot be performed"<<endl<<endl;
} 

void userchoice(int &choice)
{
	cout<<"Enter 1 to turn TV ON"<<endl; 
	cout<<"Enter 2 for input selection"<<endl;
	cout<<"Enter 3 for mode selection"<<endl; 
	cout<<"Enter 4 to increase volume"<<endl; 
	cout<<"Enter 5 decrease volume"<<endl; 
	cout<<"Enter 6 to move to next channel"<<endl;
	cout<<"Enter 7 to move to previous cahnnel "<<endl;
	cout<<"Enter 8 to turn TV ON via remote"<<endl; 
	cout<<"Enter 9 for input selection via remote"<<endl;
	cout<<"Enter 10 for mode selection via remote"<<endl; 
	cout<<"Enter 11 to increase volume via remote "<<endl; 
	cout<<"Enter 12 decrease volume via remote"<<endl; 
	cout<<"Enter 13 to move to next channel via remote"<<endl;
	cout<<"Enter 14 to move to previous cahnnel via remote"<<endl; 
	cout<<"Enter 15 to move to a specific channel number"<<endl;
	cout<<"Enter 16 for controlling VCR settings"<<endl; 
	cout<<"Enter your choice: "; 
	cin>>choice; 
	
	if(choice>16||choice<1) 
	{ 
		cout<<"Please enter a number from those that have been mentioned above"<<endl<<endl; 
		userchoice(choice); 
	} 
	cout<<endl;
}

int main() 
{ 
	TV T; 
	remote R;  
	int choice;
	T.tv_settings(); 
	char n; 
	int num;
	do{
		userchoice(choice);  
		{
			if(choice==1)
			T.o_f(); 
			else if(choice==2)
			T.input_selection();  
			else if(choice==3)
			T.mode(); 
			else if(choice==4) 
			T.volumeinc(); 
			else if(choice==5) 
			T.volumedec(); 
			else if(choice==6)
			T.channelnext(); 
			else if(choice==7) 
			T.channelprev(); 
			else if(choice==8)
			R.o_fr(T); 
			else if(choice==9)
			R.input_selectionr(T);  
			else if(choice==10)
			R.moder(T); 
			else if(choice==11) 
			R.volumeincr(T); 
			else if(choice==12) 
			R.volumedecr(T); 
			else if(choice==13)
			R.channelnextr(T); 
			if(choice==14) 
			R.channelprevr(T);
			else if(choice==15) 
			R.skiptochanelno(); 
			else if(choice==16)
			R.for_vcr(T); 
		} 
		cout<<"Do you want to perform another feature also Y/N: "; 
		cin>>n; 
	} 
	while(n=='Y'||n=='y'); 
	cout<<endl<<endl; 
	cout<<"Do you want to repeat the whole program enter 1 if you DO: "; 
	cin>>num; 
	if(num==1) 
	main(); 
	else 
	cout<<endl;
	return 0;
}
