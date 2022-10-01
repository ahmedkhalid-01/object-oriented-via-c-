#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct studentInfo
{
    string name,Fname,dep,uni;
    string regno;
};
int main()
{
    studentInfo st[3];
    fstream file;
    file.open("data.csv",ios::out);
    if(!file)
    {
        cout<<"file not created\n";
    }
    cout<<"-----File created succesfully------\n";
    file<<"Aqib\nSajjad\nElectrical\nAir University\nreg No: 200210\n";
    
    file<<"Hassan\nTariq\nElectrical\nAir University\nRegno: 200871\n";
    
    file<<"Tahreem\nRaza\nElectrical\nAir University\nRegno: 200222\n";
    file.close();

    //now passing the data in struct array object
    file.open("data.csv",ios::in);
    for(int i=0; i<3; i++)
    {
        getline(file,st[i].name);
        getline(file,st[i].Fname);
        getline(file,st[i].dep);
        getline(file,st[i].uni);
        getline(file,st[i].regno);
    }
    //now displaying the contents from Structure 
    
   
    for(int i=0; i<3; i++)
    {
        cout<<st[i].name<<endl;
        cout<<st[i].Fname<<endl;
        cout<<st[i].dep<<endl;
        cout<<st[i].uni<<endl;
        cout<<st[i].regno<<endl;
        cout<<"-----------------------\n";
    }
    
    file.close();
    return 0;
}
