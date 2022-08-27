#include <iostream>
using namespace std;

struct Student{
	string Name;
	int RegNum;
	string FatherName;
	string DegreeDept;
};

int main(){
	Student S[5];
	int x;
	int z=x+1;
	char y,repeat; 

	for(int i=0; i<5; i++){
	cout << "Enter Name "<<i+1<< " : ";
	cin >> S[i].Name;
	cout <<  "\nEnter Registration Number "<<i+1<< " : ";
	cin >>S[i].RegNum;
	cout << "\nEnter Fathers Name "<<i+1<< " : ";
	cin >> S[i].FatherName;
	cout << "\nEnter Degree and Department "<<i+1<< " : ";
	cin >> S[i].DegreeDept;
	cout << endl;
}
	
	cout << "\n\n\t\tDisplaying Details of Student Entered";
	
	for(int j=0; j<5; j++){	
	cout << "\n\nName of Student " << j+1 << ": " << S[j].Name; 
	cout << "\n\nRegistration Number of Student " << j+1 << ": "  << S[j].RegNum; 
	cout << "\n\nFathers Name of Student " << j+1 << ": " << S[j].FatherName; 		
	cout << "\n\nDegree and Department of Student " << j+1 << ": "  << S[j].DegreeDept; 
}
	cout<<endl<< endl;		
	
	// using do while loop for replacement of data
	
	do
{
	cout<<"Would you like to replace the data of any one student Y/N: ";
	cin>>y; 
	
	if(y=='Y'||y=='y') 
{
	cout<<endl<<endl;
	cout<<"Please enter the number on which the student you want to replace is placed: "; 
	cin>>z; 
	cout<<"\nNow enter the name of the new student: "; 
	cin>>S[z-1].Name;
	cout<<"\nEnter the Registration number of new student: "; 
	cin>>S[z-1].RegNum;  
	cout<<"\nEnter the Fathers name of the new student : "; 
	cin>>S[z-1].FatherName; 
	cout<<"\nEnter the degree and department of the new student : "; 
	cin>>S[z-1].DegreeDept;  
	
	cout<<endl; 
	
	//printing data again after revision
	
	cout<<"\n\n\t\tThe revised data is as follows: "<<endl<<endl;
	
	for(int j=0; j<5; j++){	
	cout << "\n\nName of Student " << j+1 << ": " << S[j].Name; 
	cout << "\n\nRegistration Number of Student " << j+1 << ": "  << S[j].RegNum; 
	cout << "\n\nFathers Name of Student " << j+1 << ": " << S[j].FatherName; 		
	cout << "\n\nDegree and Department of Student " << j+1 << ": "  << S[j].DegreeDept; 
}	
}
	else if(y=='N'||y=='n') 
	cout<<"\nThe above desplayed is the final data of the students ";
	cout<<"\n\nWould you like to do the same for another student Y/N: "; 
	cin>>repeat; 
} 
	while(repeat=='Y'||repeat=='y');
	
	return 0;
}
