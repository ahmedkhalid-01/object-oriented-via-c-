#include<iostream>
using namespace std;

class class_2;
class class_1
{
    private:
        int num1;
    public:
        class_1()
        {
            num1=10;
        }
        void show()
        {
            cout<<"\n Value of Number 1 : "<<num1;
        }
        friend void swap(class_1 *num1, class_2 *num2); // using friend function
};

class class_2
{
    private:
        int num2;
    public:
        class_2()
        {
            num2=20;
        }
        void show()
        {
            cout<<"\n Value of Number 2 : "<<num2;
        }
        friend void swap(class_1 *num1, class_2 *num2);
};

void swap(class_1 *no1, class_2 *no2)
{
    int no3;
    no3=no1->num1;
	no1->num1=no2->num2;
	no2->num2=no3;
}

int main()
{
	cout<< "Value stored in class_1 is 10 and class_2 is 20"<< endl;
	class_1 def;
    class_2 def2;
	swap(&def, &def2);
    def.show();
    def2.show();
	return 0;
}
