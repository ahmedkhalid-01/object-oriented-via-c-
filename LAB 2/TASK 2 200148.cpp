#include <iostream>
using namespace std;

class account
{ 
	private: 
		double balance; 
		double credit; 
		double debit; 
	
	public: 
		double set1(double x) 
	{ 
		x=balance; 
	}
	
	double set2(double y) 
	{ 
		y=credit; 
	} 
	
	double set3(double z) 
	{ 
		z=debit; 
	} 
	
	double get1(double x) 
	{ 
		return x; 
	}
	
	double get2(double y) 
	{ 
		return y; 
	} 
	
	double get3(double z) 
	{ 
		return z; 
	}  
	
	
	double getbalance1(double x,double y) 
	{ 
		double newbalance1; 
		newbalance1=x+y; 
		return newbalance1; 
	} 
	
	double getbalance2(double x,double z) 
	{ 
		double newbalance2; 
		newbalance2=x-z;
		return newbalance2;
	}
};

int main()  
{
	char repeat;
	do
	{
		int n;  
		cout<<"Enter the number of people you would like to add the data for: "; 
		cin>>n;
		cout<<endl;
		account a[n]; 
		double b,c,d;  
		int num; 
		char opt;  
		
		for(int i=0;i<n;i++) 
		{
			cout<<"Enter data for person "<<i+1<<endl;
			cout<<"Please enter your current account balance: "; 
			cin>>b; 
			cout<<endl<<endl;
			
			if(b==0||b>0) 
			{
			
				a[i].set1(b); 
				cout<<"Your initial account balance is: "<<a[i].get1(b)<<endl; 
				
				cout<<"Enter 1 if you would like to Deposit money to your account "<<endl; 
				cout<<"Enter 2 if you would like to withdraw money from your account "<<endl; 
				cin>>num;  
				cout<<endl;
				if(num==1) 
				{
					cout<<"Please enter the ammount of money you would like to Deposit to your bank account: "; 
					cin>>c; 
					cout<<endl;
					
					a[i].set2(c);  
					cout<<"The amount of money you want to enter is: "<<a[i].get2(c)<<endl<<endl; 
					cout<<"Would you like to know your updated account balance Y/N: "; 
					cin>>opt; 
					cout<<endl;
					if(opt=='Y'||opt=='y') 
					{
						cout<<"Your new balance in your account is: "<<a[i].getbalance1(b,c);
					} 
					else 
					cout<<endl;
				}  
				
				else if(num==2) 
				{
					cout<<"Please enter the ammount of money you would like withdraw your bank account: "; 
					cin>>d; 
					cout<<endl;
					if(b>d) 
					{
					
						a[i].set3(d); 
						cout<<"The amount of money you want to enter is: "<<a[i].get3(d)<<endl; 
						cout<<"Would you like to know your updated account balance Y/N: "; 
						cin>>opt;  
						cout<<endl;
						if(opt=='Y'|| opt=='y')  
						{
							cout<<"Your new balance is: "<<a[i].getbalance2(b,d)<<endl;
						} 
						else 
						cout<<endl;
					} 
					else 
					cout<<"Could not proceed transaction. ";
					} 
			} 
			cout<<endl<<endl<<endl<<endl;
		} 
		cout<<"Do you want to repeat the same procedure for more people Y/N: "; 
		cin>>repeat; 
	} 
	while(repeat=='Y'||repeat=='y');
	return 0;
}
