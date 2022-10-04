#include<iostream>
#include<sstream>
#include<stdlib.h>
#include<conio.h>
#include<vector>
#include<windows.h>
#include<iomanip>
#include<fstream>
using namespace std;

vector <string> temp;
short spacing(short,short);
class manager;
void UBwrite();
void details();
short TF();
void customerdetails();

void declare(){
	for (short i=0;i<4;i++)
	temp.push_back("0");
}

string shold,shold2,shold3;
short ihold,ihold2;
short bookey[2];
bool NEW=false;
short S[4]={16,21,14,14};

bool spacecheck(string k){
	for (short i=0;k[i];i++){
		if (k[i]==' ')
		return 1;
	}
	return 0;
}

bool commacheck(string k){
	for (short i=0;k[i];i++){
		if (k[i]==',')
		return 1;
	}
	return 0;
}

bool asteriskcheck(string k){
	for (short i=0;k[i];i++){
		if (k[i]=='*')
		return 1;
	}
	return 0;
}

short convert(string x){
	stringstream carrier(x);
	short hold;carrier>>hold;
	return hold;
}

string chconvert(char x){
	stringstream carrier;
	carrier<<x;
	string hold;
	carrier>>hold;
	return hold;
}

string iconvert(short t){
	stringstream carrier;
	carrier<<t;
	string hold=carrier.str();
	return hold;
}

void decode(string q){
	ihold=0;
	shold.erase();
	for (short i=0;q[i];i++){
		if (q[i]!='/')
		shold+=chconvert(q[i]);
		else{
			bookey[ihold]=convert(shold);
			ihold++;
			shold.erase();
		}
	}
	if (ihold==1){
		bookey[ihold]=convert(shold);
	}
}

short MAIN(){
repeat:
	cout<<"*****************************\n";
	cout<<"\t MAIN MENU \n";
	cout<<"*****************************\n\n";
	cout<<"1) Customer Sign Up \n";
	cout<<"2) Customer Login \n";
	cout<<"3) Manager Login \n";
	cout<<"4) Exit Airtex\n\n";
	cout<<"Choose Appropriate Operation Number (1-4) to Proceed : ";
	cin>>shold;
	ihold2=convert(shold);
	if (ihold2>=1&&ihold2<=3)
	return ihold2;
	if (ihold2==4){
		system("CLS");
		cout << "\n\t\t" << "See you later!\n\t\t ~AIRTEX.\n\n\n";
		Sleep(1000);
		exit (0);
		return 0;
	}
	else{
			cout<<"INVALID INPUT ! TRY AGAIN \n";
			goto repeat;
		}
}

class airline {
	protected :
	static vector<vector<string> > flights;
	public:
};

vector<vector<string> > airline :: flights;

class customer : public airline{
	protected:
	string name,id,password;
	short Tbookings,cancellations;
	vector <string> booking ;
	public:
		customer(){
			cancellations=0;
		}
		string idaccess(){
			return id;
		}
		void signup(){
			bool point=false;
			rep0:
			cout<<"Enter Full Name : ";
			
			if(point==false)
			cin.ignore();
			getline(cin,shold);
			
			if(commacheck(shold)==1||asteriskcheck(shold)==1){
				cout<<"INVALID FORMAT ! TRY AGAIN \n";
				point=true;
				goto rep0;
			}
			name=shold;
			rep1:
			cout<<"Enter LOGIN ID : ";
			getline(cin,shold);
			
			if (spacecheck(shold)==1||shold=="RETURN"||commacheck(shold)==1||asteriskcheck(shold)==1){
				cout<<"INVALID INPUT ! TRY AGAIN \n";
				goto rep1;
			}
			id=shold;
			rep2:
			cout<<"Enter Password : ";
			getline(cin,shold);
			
			if (commacheck(shold)==1||asteriskcheck(shold)==1){
				cout<<"INVALID INPUT ! TRY AGAIN \n";
				goto rep2;
			}
			password=shold;
			NEW=true;
	            UBwrite();
			cout<<"Account Creation Successful ! \n";
			throwback0();
		}
		void authentication(){
			ihold2=0;
			rep:
			cout<<"Enter Password : ";
			
			if(ihold2==0)
			cin.ignore();
			getline(cin,shold);
			
			if(shold==password){
				cout<<"LOGIN Successful ! \n";
				throwback0();
			}
			else {
			    cout<<"Incorrect Password ! TRY AGAIN \n";
			    ihold2++;
				goto rep;
			}
		}
		void throwback0(){
			cout<<"PRESS any Key to Enter Customer Menu ";
			getch();
			system("CLS");
			customermenu();
		}
		void throwback(){
			cout<<"PRESS any Key to Return to Main Menu ";
			getch();
			system("CLS");
			customermenu();
		}
		void customermenu(){
	        mainmenu:
				cout<<"Welcome "<<name<<" ! \n \n";
				cout<<"************************************ \n";
				cout<<"\t CUSTOMER MENU \n";
				cout<<"************************************ \n \n";
				cout<<"1) List of Available Flights \n";
				cout<<"2) Make a New Booking \n";
				cout<<"3) Information about Existing Booking \n";
				cout<<"4) Cancel a Booking \n";
				cout<<"5) Logout \n \n";
				cout<<"Choose Appropriate Operation Number (1-4) to Proceed : ";
				cin>>shold;
				short choice;
				choice=convert(shold);
				
				if (choice==1){
					if (TF()==0)
					cout<<"NO FLIGHTS AVAILABLE AT THE MOMENT ! \n";
					else {
					cout<<"   ORIGIN          DESTINATION          DATE          TIME         \n \n";
					for (short i=0;i<TF();i++){
							cout<<i+1<<") ";
							for (short j=0;j<4;j++){
								cout<<flights[i][j];
								for (short t=0;t<spacing(flights[i][j].size(),S[j]);t++)
								cout<<" ";
							}
							cout<<"\n";
						}
					}
					throwback();
				}
				else if (choice==2){
					cout<<"   ORIGIN          DESTINATION          DATE          TIME          \n \n";
					for (short i=0;i<TF();i++){
						cout<<i+1<<") ";
						for (short j=0;j<4;j++){
						cout<<flights[i][j];
						for (short k=0;k<spacing(flights[i][j].size(),S[j]);k++)
						cout<<" ";
						}
						cout<<"\n";
					}
					cout<<"\n";
					rep1:
					cout<<"Enter the Corresponding Flight Number to Book : ";
					cin>>shold;
					if (shold=="RETURN"){
						system("CLS");
						goto mainmenu;
					}
					ihold=convert(shold);
					if (ihold>=1&&ihold<=TF()){
						ihold--;
						ihold2=0;
						for (;ihold2<Tbookings;ihold2++){
						if(iconvert(ihold)==chconvert(booking[ihold2][0])){
								cout<<"You Have Already Booked this Flight ! \n";
								throwback();
							}
						}
						shold=iconvert(ihold);
						shold2=shold;
						rep2:
						cout<<"Enter Number of Seats to Book : ";
						cin>>shold;
						if (shold=="RETURN"){
							system("CLS");
							goto mainmenu;
						}
						ihold=convert(shold);
						if (ihold>0){
							shold3=shold;
							shold=shold2+"/"+shold3;
							if (cancellations==0)
							booking.push_back(shold);
							else {
								booking[Tbookings]=shold;
								cancellations--;
							}
							Tbookings++;
							cout<<"Booking was Successful ! \n \n";
							UBwrite();
							throwback();
						}
						else {
							cout<<"INVALID INPUT ! TRY AGAIN \n";
							goto rep2;
						}
						}
						else {
							cout<<"INVALID INPUT ! TRY AGAIN \n";
							goto rep1;
						}
				}
				else if (choice==3){
					if(Tbookings!=0){
						cout<<"   ORIGIN          DESTINATION          DATE          TIME          No. of Seats     \n \n";
						for (short i=0,k=1;i<Tbookings;i++){
							shold=booking[i];
							decode(shold);
							cout<<k<<") ";
							k++;
							for (short j=0;j<4;j++){
								cout<<flights[bookey[0]][j];
								for (short k=0;k<spacing(flights[bookey[0]][j].size(),S[j]);k++)
								cout<<" ";
								if (j==3)
								cout<<bookey[1];
							}
							cout<<"\n";
						}
					}	
				else
				    cout<<"You Have No Bookings ! \n";
				throwback();
				}
				else if (choice==4){		
					if(Tbookings!=0){
						cout<<"   ORIGIN          DESTINATION          DATE          TIME          \n \n";
						for (short i=0;i<Tbookings;i++){
						shold=booking[i];
						decode(shold);
						cout<<bookey[0]+1<<") ";
						for (short j=0;j<4;j++){
						cout<<flights[bookey[0]][j];
						for (short k=0;k<spacing(flights[bookey[0]][j].size(),S[j]);k++)
						cout<<" ";
						if (j==3)
						cout<<bookey[1];}
						cout<<"\n";
						}
						rep3:
						cout<<"Enter the Corresponding Booking Number to Cancel : ";
						cin>>shold;
						if (shold=="RETURN") {
						system("CLS");
						goto mainmenu;}
						ihold=convert(shold);
						if (ihold>=1&&ihold<=TF()){
							ihold2=ihold;
							ihold2--;
							short i=0;
							bool P=false;
						for (;i<Tbookings;i++){
						shold=booking[i];
						decode(shold);
						if (bookey[0]==ihold2){
							booking[i].erase();
							P=true;
							break;
						}
						}
						if (P!=true){
							cout<<"INVALID INPUT ! TRY AGAIN \n";
							goto rep3;	
						}
						Tbookings--;
						cancellations++;
						for (int i;i<Tbookings;i++)
							swap(booking[i],booking[i+1]);
							UBwrite();
						cout<<"Cancellation was Successful ! \n";
							}
							else {
								cout<<"INVALID INPUT ! TRY AGAIN \n";
								goto rep3;	
							}
						}
						else 
					    cout<<"You Have No Bookings ! \n";
						throwback();
				}
				else if (choice==5){
					system("CLS");
					cout << "\n\t\t" << "Thankyou for choosing AIRTEX.\n\n\n";
					Sleep(1000);
					system("CLS");}

				else {
					cout<<"INVALID SELECTION TRY AGAIN ! \n";
					throwback();
				}
				}
};
			
class manager : public customer {
	static string id,name,password;
	static short Tflights,Tcustomers;
	friend void UBwrite();
	friend void retrieve();
	friend void details();
	friend void customerdetails();
	friend void redirect();
	public:
		static string idcheck(){
			return id;
		}
		static string passwordcheck(){
			return password;
		}
		static void throwback(){
			cout<<"PRESS any Key to Return to Main Menu ";
						getch();
						system("CLS");
				        managermenu();}
		static void customerInc(){
			Tcustomers++;
		}
		static short giveTflights(){
			return Tflights;
		}
		static short giveTcustomers(){
			return Tcustomers;
		}
		static void managermenu(){
			mainmenu:
			cout<<"Welcome "<<name<<"\n";
			cout<<"************************************* \n";
			cout<<"\t MANAGER MENU \n";
			cout<<"************************************* \n\n";
			cout<<"1) Add New Flight Information \n";
			cout<<"2) View All Flights & Booking Details \n";
			cout<<"3) View Customer Details \n";
			cout<<"4) LOGOUT \n";
			cout<<"Choose Appropriate Operation Number (1-4) to Proceed : ";
			cin>>shold;
			short ch;
			ch=convert(shold);
			if (ch==1){
				cout<<"Enter Origin : ";
				cin.ignore();
				getline(cin,shold);
				if (shold=="RETURN") {
					system("CLS");
					goto mainmenu;}
				temp[0]=shold;
				cout<<"Enter Destination : ";
				getline(cin,shold);
				if (shold=="RETURN") {
					system("CLS");
					goto mainmenu;}
				temp[1]=shold;
				cout<<"Enter Flight Date : ";
				getline(cin,shold);
				if (shold=="RETURN") {
					system("CLS");
					goto mainmenu;}
				temp[2]=shold;
				cout<<"Enter Flight Time : ";
				getline(cin,shold);
				if (shold=="RETURN") {
					system("CLS");
					goto mainmenu;}
				temp[3]=shold;
				flights.push_back(temp);
				Tflights++;
				Fwrite();
				cout<<"Flight Information Uploaded Successfully ! \n";
				throwback();
			}
			else if (ch==2){
				details();
				throwback();}
				
			else if (ch==3){
				customerdetails();
				throwback();}
				
			else if (ch==4) {
				system("CLS");
				cout << "\n\t\t" << "Thankyou for choosing AIRTEX.\n\n\n";
				Sleep(1000);
				system("CLS");
			}
			
		}
        static void Fwrite(){
        	fstream flight;
        	flight.open("FLIGHTS.csv",ios::out);
        for (short i=0;i<Tflights;i++){

        	for (short j=0;j<4;j++){
        	flight<<flights[i][j];
        	if(j<=2)
        	flight<<',';}
        	flight<<'*';
        	flight<<"\n";
		}
		flight.close();
		}
};
string manager::id="ADMIN";
string manager::name="Ahmed, Bisma, Aqib";
string manager::password="123";
short manager::Tcustomers;
short manager::Tflights;
manager *ptr;
vector<manager> object;

short TF(){
	return manager::giveTflights();
}

void UBwrite(){
	fstream booking;
	booking.open("User & Booking Data.csv",ios::out);
	ihold=0;
	short limit;
	if(NEW==true){
		object[manager::Tcustomers].customer::Tbookings=0;
		manager::Tcustomers++;
	}
	NEW=false;
	for (;ihold<manager::Tcustomers;ihold++){
		booking<<object[ihold].customer::name;
		booking<<',';
		booking<<object[ihold].customer::id;
		booking<<',';
		booking<<object[ihold].customer::password;
		if (object[ihold].customer::Tbookings!=0)
		booking<<',';
		for (short i=0;i<object[ihold].customer::Tbookings;i++){
		booking<<object[ihold].customer::booking[i];
		if (i<=(object[ihold].customer::Tbookings-2))
		booking<<',';}
		booking<<'*';
		booking<<"\n";}
		booking.close();		
}
	
void retrieve(){
	fstream flight;
	fstream booking;
	flight.open("FLIGHTS.csv",ios::in);
	ihold=0;
	while(flight){
    	getline(flight,shold);
		ihold++;
	}
	flight.close();
	manager::Tflights=ihold-1;
    string hold[manager::Tflights];
	ihold=0;
    flight.open("FLIGHTS.csv",ios::in);
    while(ihold<manager::Tflights){
	    getline(flight,hold[ihold]);
	    ihold++;
	}
    flight.close();
    ihold=0;
    shold.erase();
    for (short i=0;i<manager::Tflights;i++){
    	for (short j=0;hold[i][j];j++){
    		if(hold[i][j]!=','){
    		if(hold[i][j]!='*')
    		shold+=hold[i][j];
			else goto land1; }

    		else {
    			land1:
    			temp[ihold]=shold;
    			ihold++;
    			shold.erase();
			}
			}
		    	ihold=0;	
			customer::flights.push_back(temp);
	}
	booking.open("User & Booking Data.csv",ios::in);
	ihold=0;
	while(booking){
    	getline(booking,shold);
		ihold++;
	}
	booking.close();
	manager::Tcustomers=ihold-1;
	ihold=0;
	for (;ihold<manager::Tcustomers;ihold++){
		manager *ptr= new manager;
		object.push_back(*ptr);
	}
	string hold2[manager::Tcustomers];
	ihold=0;
    booking.open("User & Booking Data.csv",ios::in);
   	while(ihold<manager::Tcustomers){
	    getline(booking,hold2[ihold]);
	    ihold++;
	}
    booking.close();
    shold.erase();
    for (short i=0;i<manager::Tcustomers;i++){
    	    ihold=0;
    	    ihold2=0;
    	for (;hold2[i][ihold2];ihold2++){
    		if(hold2[i][ihold2]==',')
    		ihold++;}
		object[i].customer::Tbookings=ihold-2;
		ihold=0;
    	for (short j=0;hold2[i][j];j++){
    		
    		if(hold2[i][j]!=','){
    		if(hold2[i][j]!='*')
    		shold+=hold2[i][j];
			else goto land2; }

    		else {
    			land2:
    			if (ihold==0)
    			object[i].customer::name=shold;
    			else if (ihold==1)
    			object[i].customer::id=shold;
    			else if (ihold==2)
    			object[i].customer::password=shold;
    			else
    			object[i].customer::booking.push_back(shold);
    			ihold++;
				shold.erase();}
			}
			ihold=0;
		}
			
}
short spacing (short x,short y){
	return (y-x);
}
void details(){
	cout<<"Total Number of Flights Available are : "<<manager::Tflights<<"\n \n";
	ihold=0;
	cout<<"   ORIGIN          DESTINATION          DATE          TIME          Total Bookings \n \n";
	for (;ihold<manager::Tflights;ihold++){
		short i=0,j=0;
		while(i<manager::Tcustomers){
			for (short k=0;k<object[i].customer::Tbookings;k++){
				short p=convert(chconvert(object[i].customer::booking[k][0]));
				if(p==ihold)
				j++;
			}
			i++;
		}
		cout<<ihold+1<<") ";
		ihold2=0;
		for (;ihold2<4;ihold2++){
			cout<<manager::flights[ihold][ihold2];
			for (short n=0;n<spacing(manager::flights[ihold][ihold2].size(),S[ihold2]);n++)
			cout<<" ";
		}
			cout<<j;
	        cout<<"\n";
	}
}
void customerdetails(){
	short S=24;
	cout<<"Total Customers = "<<manager::Tcustomers<<"\n \n";
	if(manager::Tcustomers!=0){
	cout<<"   NAME                    TOTAL BOOKINGS \n";
	ihold=0;
	for (;ihold<manager::Tcustomers;ihold++){
		cout<<ihold+1<<") ";
		cout<<object[ihold].customer::name;
		for (ihold2=0;ihold2<spacing(object[ihold].customer::name.size(),S);ihold2++)
		cout<<" ";
		cout<<object[ihold].customer::Tbookings<<"\n";}}
}
void intro() {

	cout << "\n\n\n\t\t   ****************************" << endl;
	cout << "\t\t         WELCOME TO AIRTEX" << endl;
	cout << "\t\t   ****************************" << endl;
	Sleep(1500);
	cout << "\n\n\t\t    AIRTEX Welcomes you on behalf of:" << endl;
	Sleep(1100);
	cout << "\n\t\t         MANAGER: Ahmed Khalid" << endl;
	Sleep(300);
	cout << "\n\t\t         MANAGER: Bisma Shakeel" << endl;
	Sleep(300);
	cout << "\n\t\t         MANAGER: Aqib Ali" << endl;
	Sleep(1100);
	system("cls");
}

int main(){
	intro();
	declare();
	retrieve();
	start:
	short choice;
	choice=MAIN();
	if (choice==1){
		ptr= new manager;
		object.push_back(*ptr);
		object[manager::giveTcustomers()].signup();
	}
	else if (choice==2){
		rep1:
		ihold=0;
		bool flag=false;
			cout<<"Enter ID : ";
			cin>>shold;
				if (shold=="RETURN")
			goto start;
		for (;ihold<manager::giveTcustomers();ihold++){
			if (object[ihold].idaccess()==shold){
			flag=true;
			break;
			}}
			if (flag==true){
				object[ihold].authentication();
		}
		else {
			cout<<"NO ACCOUNT EXISTS AGAINST THIS ID ! TRY AGAIN ! \n";
			cout<<"(*TO RETURN TO MAIN MENU ENTER \"RETURN\") \n";
			goto rep1;
		}
	}
	else if (choice==3){
		rep2:
		cout<<"Enter ID : ";
			cin>>shold;
			if (shold=="RETURN")
			goto start;
			if (shold==manager::idcheck()){
			rep3:
			cout<<"Enter Password : ";
	        cin>>shold;
	        if (shold=="RETURN")
			goto start;
			if (shold==manager::passwordcheck()){
			system("CLS");
			manager::managermenu();}
			else {
			cout<<"Incorrect Password ! TRY AGAIN \n";
			goto rep3;}}
			else {
			cout<<"Incorrect ID ! TRY AGAIN \n";
			goto rep2;}
	}
	if (choice!=4)
	goto start;
	else {
		delete ptr;
	}
    return 0;
}
