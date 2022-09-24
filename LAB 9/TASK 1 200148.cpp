#include <iostream>
#include <vector>
using namespace std;
vector<int>h;
void display()
{
    for(auto i=h.begin();i!=h.end();i++)
	{ 
	cout<<*i;
	cout<<endl;
	}
}
int main() 
{

	h.push_back(200);
	h.push_back(144); 
	h.push_back(145);
	h.push_back(146);
	h.push_back(147); 
	h.push_back(148);
	display();
	
	return 0;
}
