#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct StudentDetails
{
string Name;
string FatherName;
double RegNo;
string Department;
string University;
};

int main() 
{
	StudentDetails s[3];
	
	for (int i;i<3;i++){
		cout<<"Enter your Name: ";
		cin>>s[i].Name;
		cout<<"Enter your Fathers Name: ";
		cin>>s[i].FatherName;
		cout<<"Enter your Registration Number: "; 
		cin>>s[i].RegNo; 
		cout<<"Enter your Department: "; 
		cin>>s[i].Department;
		cout<<"Enter your University: "; 
		cin>>s[i].University;
		cout<<endl;
	}
	cout<<endl;
	
	ofstream myfile("data.TXT");
	myfile<<s[0].Name<<endl;
	myfile<<s[0].FatherName<<endl;
	myfile<<s[0].RegNo<<endl;
	myfile<<s[0].Department<<endl;
	myfile<<s[0].University<<endl;
	myfile<<s[1].Name<<endl;
	myfile<<s[1].FatherName<<endl;
	myfile<<s[1].RegNo<<endl;
	myfile<<s[1].Department<<endl;
	myfile<<s[1].University<<endl;
	myfile<<s[2].Name<<endl;
	myfile<<s[2].FatherName<<endl;
	myfile<<s[2].RegNo<<endl;
	myfile<<s[2].Department<<endl;
	myfile<<s[2].University<<endl;
	
	ifstream file("data.TXT");
    file>>s[0].Name;
	file>>s[0].FatherName;
	file>>s[0].RegNo;
	file>>s[0].Department; 
	file>>s[0].University;
	cout<<endl;
    file>>s[1].Name;
	file>>s[1].FatherName;
	file>>s[1].RegNo;
	file>>s[1].Department; 
	file>>s[1].University;
	cout<<endl;
    file>>s[2].Name;
	file>>s[2].FatherName;
	file>>s[2].RegNo;
	file>>s[2].Department; 
	file>>s[2].University;
	
	cout<< "Displaying Data of Students"<<endl<<endl;
	cout<<s[0].Name<<" ";
    cout<<s[0].FatherName<<" ";
    cout<<s[0].RegNo<<" ";
    cout<<s[0].Department<<" ";
	cout<<s[0].University<<" ";
	cout<<endl<<endl;
	cout<<s[1].Name<<" ";
    cout<<s[1].FatherName<<" ";
    cout<<s[1].RegNo<<" ";
    cout<<s[1].Department<<" ";
	cout<<s[1].University<<" ";
	cout<<endl<<endl;
	cout<<s[2].Name<<" ";
    cout<<s[2].FatherName<<" ";
    cout<<s[2].RegNo<<" ";
    cout<<s[2].Department<<" ";
	cout<<s[2].University<<" ";
	cout<<endl<<endl;
	
    myfile.close();
    
	return 0;
}

