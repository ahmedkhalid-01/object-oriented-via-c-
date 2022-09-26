#include <iostream>
#include <exception>
using namespace std;

int main()
{
	int array[5]={0,1,1,0,7} ; 

	try { 
	   for(int i=0;i<5;i++){
	   	
	   if (array[i]>2){
	       throw array[i]; 
	   }
	   
	   else{
			cout<< "Char Exception\n";
	   }
	   }
	}
	  
	catch (int x ){
	   cout << "Integer Exception\n";
	}

	return 0;
}
