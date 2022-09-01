#include<iostream>
using namespace std;

class matrix {
	
	int a[3][3], b[3][3], ans[3][3];
   
	public:
		
		matrix() // Created Constructor for takking matrices inputs 
	   {
           cout <<endl << "Enter first matrix:" << endl;
           for(int i = 0; i < 3; i++)
           {
               for(int j = 0; j < 3; j++)
               {
               	   cout << "Enter element a" << i + 1 << j + 1 << ": ";
                   cin >> a[i][j];
               }
           }
           cout << endl;
           cout <<endl <<"Enter second matrix:" << endl;
           for(int i = 0; i < 3; i++)
           {
               for(int j = 0; j < 3; j++)
               {
               	   cout << "Enter element a" << i + 1 << j + 1 << ": ";
                   cin >> b[i][j];
               }
           }
       }

       void Matrix_Multiplication() // Mutiplication Function
	   {
           cout << endl << "After matrix multiplication" << endl;
           for(int i = 0; i < 3; i++) 
		   {
               for (int j = 0; j < 3; j++) 
			   {
                   ans[i][j] = 0;
                   for(int k = 0; k < 3; k++)
                       ans[i][j] += a[i][k] * b[k][j];
                   cout << ans[i][j] << "\t";
               }
               cout << endl;
           }
           cout << endl;       
		}
		
       void Matrix_Addition() // Addition Function 
	   {
           cout << endl <<"After matrix addition" << endl;
           for(int i = 0; i < 3; i++) 
		   {
               for (int j = 0; j < 3; j++) 
			   {
                   ans[i][j] = a[i][j] + b[i][j];
                   cout << ans[i][j] << "\t";
               }
               cout << endl;
           }
           cout << endl;  
       }
};

int main() {
	int r1, c1, r2, c2, i, j, k;
	
	cout << "Enter rows and columns for first matrix: ";
	cin >> r1 >> c1;
	cout << endl <<"Enter rows and columns for second matrix: ";
	cin >> r2 >> c2;
	
	if(r1!=c1 || r2!=c2)
	{
		cout<<endl <<"Matrix addition is not possible"<<endl;
	}
	else
	{
		matrix add = matrix();
		add.Matrix_Addition(); // Calling Function
	}
	if(c1!=r2)
	{
		cout <<endl<< "Matrix multiplication not possible."<<endl;
	}
	else
	{
		matrix mul = matrix();
		mul.Matrix_Multiplication(); // Calling Function
	}
	    
	return 0;
}
