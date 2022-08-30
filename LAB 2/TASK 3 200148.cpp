#include<iostream>
using namespace std;

class Rational{
    int num, den;
    public:
  
    //Constructing the class
    Rational(){
        num = 0;
        den = 1;        //denominator can not be zero
    }
  
    //inputing numerator and denominator
    void input(){
        cout<<"Enter numerator: ";
        cin>>num;
        cout<<"Enter denominator: ";
        cin>>den;
    }
  
    //function to add two rational numbers
    void add(Rational a, Rational b){
        num = a.num*b.den + a.den*b.num;
        den = a.den*b.den;
        reducedForm();
        print();
    }
  
    //function to subtract two rational numbers
    void sub(Rational a, Rational b){
        num = a.num*b.den - a.den*b.num;
        den = a.den*b.den;
        reducedForm();
        print();
    }
  
    //function to multiply two rational numbers
    void mul(Rational a, Rational b){
        num = a.num*b.num;
        den = a.den*b.den;
        reducedForm();
        print();
    }
  
    //function to divide two rational numbers
    void division(Rational a, Rational b){
        num = a.num*b.den;
        den = a.den*b.num;
        reducedForm();
        print();
    }
  
    //converting rational number into reduced form
    void reducedForm(){
        int a,b,c;
        a = num;
        b = den;
        do{
            c = a%b;
            a = b;
            b = c;
        }
        while(c != 0);
        num = num/a;
        den = den/a;
    }
  
    //printing the result of above arithmetic operations
    void print(){
        cout<<endl<<"Result is : "<<num<<"/"<<den<<endl;
    }
  
    //printing the rational number in fraction
    void printFraction(){
        cout<<"Rational number in fraction form is: "<<num<<"/"<<den<<endl;
    }
  
    //printing the rational number in floating-point.
    void printDecimal(){
        cout<<"Rational number in floating-point form is: "<<(float)num/den;
    }
};

int main(){
	char choices;
	do
	{
    Rational r1,r2,r3;          //class objects
    int choice;
    cout<<"\t\tRATIONAL NUMBER - ARITHMETIC"<<endl<<endl;
    cout<<"MENU"<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Substraction"<<endl;
    cout<<"3. Multplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"5. Print in Fraction"<<endl;
    cout<<"6. Print in Decimal"<<endl<<endl;
    cout<<"Enter choice: ";
    cin>>choice;
  
    //to perform arithmetic operations, we require two inputs
    if(choice<5 && choice>0){
        cout<<endl<<"Enter Rational number 1"<<endl;
        r1.input();
        cout<<endl<<"Enter Rational number 2"<<endl;
        r2.input();
    }
  
    //switch statement
    switch(choice){
        case 1:
            r3.add(r1,r2);
        break;
        case 2:
            r3.sub(r1,r2);
        break;
        case 3:
            r3.mul(r1,r2);
        break;
        case 4:
            r3.division(r1,r2);
        break;
        case 5:{
            cout<<endl<<"Enter rational number"<<endl;
            r1.input();
            r1.printFraction();
        }
        break;
        case 6:{
            cout<<endl<<"Enter rational number"<<endl;
            r1.input();
            r1.printDecimal();
        }
        break;
        default:
            cout<<endl<<"Wrong choice!!";
        break;
    }
    cout<<endl<< endl;
	cout<<"Do you want to repeat Y/N: ";
    cin>>choices;
    cout<<endl;
    }
    while(choices=='Y' || choices=='y');
    
    return 0;
}
