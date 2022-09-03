#include <iostream>
using namespace std; 
class class_2; 

class class_1 
{ 

private: 
int x;//pvt variables declaration
int y; 
public: 
class_1()//default constructor
{ 
x=0; 
y=0;
} 
class_1(int l,int m)//parametrized constructor
{ 
x=l; 
y=m;
}
void user_input();//function declaration 
void user_input2();//function declaration 

friend void swap1(class_1 n1,class_2 n3);//friend function declared for swapping
friend void swap2(class_1 n2,class_2 n4);
}; 

class class_2
{ 

private: 
int a;//private variable declaration
int b;//private variable declaration 
public: 
class_2()//default constructor
{ 
a=0; 
b=0;
} 
class_2(int j,int k)//parametrized constructor
{ 
a=j; 
b=k;
}
void user_input3();//function declared
void user_input4();//Function declared 

friend void swap2(class_1 n2,class_2 n4);//Friend function for swapping
friend void swap1(class_1 n1,class_2 n3);
};

void class_1::user_input()//function definition
{ 
cout<<"Enter your first value of your first class: "; 
cin>>x; 
 

} 
void class_1::user_input2()//function definition
{ 
cout<<"Enter your second value of your first class: "; 
cin>>y; 


} 
void class_2::user_input3()//function definition
{ 
cout<<"Enter your first value of your second class: "; 
cin>>a; 
 

} 
void class_2::user_input4()//function definition
{ 
cout<<"Enter your second value of your second class: "; 
cin>>b; 
cout<<endl; 

}

void swap1(class_1 n1,class_2 n3)//swapping function defined
{ 
n1.x=n1.x+n3.a;//This gives us the sum of first number and second number
n3.a=n1.x-n3.a;//This gives us the first number after being swapped
n1.x=n1.x-n3.a;//This gives us the second number after being swapped
cout<<"First number of the first class after being swapped will be "<<n1.x<<endl; 
cout<<"First number of the second class after being swapped will be "<<n3.a<<endl; 

}

void swap2(class_1 n2,class_2 n4)//swapping function defined
{ 
n2.y=n2.y+n4.b;//This gives us the sum of first number and second number
n4.b=n2.y-n4.b;//This gives us the first number after being swapped
n2.y=n2.y-n4.b;//This gives us the second number after being swapped
cout<<"Second number of the first class after being swapped will be "<<n2.y<<endl; 
cout<<"Second number of the second class after being swapped will be "<<n4.b<<endl; 

} 

void userchoice(int &choice) 
{ 
cout<<"Enter 1 for swapping the first numbers of both classes"<<endl; 
cout<<"Enter 2 for swapping the second numbers of both classes"<<endl; 
cout<<"Enter your choice: "; 
cin>>choice; 
if(choice<1||choice>2) 
{ 
cout<<"Please select numbers from those mentioned above"<<endl<<endl; 
userchoice(choice); 
cout<<endl;
} 
else 
cout<<endl; 
}

int main() 
{ 
int choice; 
class_1 num1,num2;//class variables declared
class_2 num3,num4;//class variables declared 
//functions called 
num1.user_input(); 
num2.user_input2();
num3.user_input3();
num4.user_input4(); 

char opt; 
do
{
userchoice(choice); 
if(choice==1)
swap1(num1,num3); 
else if(choice==2)
swap2(num2,num4);
cout<<endl<<endl;

cout<<"Would you like to perform another function Y: "; 
cin>>opt; 
cout<<endl<<endl;
} 
while(opt=='Y'||opt=='y');
int num;
cout<<"Do you want to swap any more numbers if you do please enter 1: "; 
cin>>num; 
cout<<endl;
if(num==1) 
main();//main function recalled in case user wants to do same for more values 
else 
cout<<endl;
	return 0;
}
