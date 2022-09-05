#include<iostream>

using namespace std;

//class Time initialised here

class Time

{

    private:

    //3 private data members

    //observe that,  0 <= hrs <= 23 representing 24 hours, 0 being 12 am

    //               0 <= mins <= 59 representing 60 minutes, 0 being 60 minutes

    //               0 <= sec <= 59 representing 60 seconds, 0 being 60 seconds

        int hrs, mins, sec;

    public:

    //default constructor initialising time variables to default value of 12 am

        Time()

        {

            hrs=mins=sec=0;

        }

    //friend function overloading extraction operator '>>' for taking input for Time objects

        friend void operator>>(istream &input, Time &obj)  //Overloading >> Operator

        {

            do//loops until correct input is entered for hours

            {

                cout<<"\n Enter hrs   :  ";

                input>>obj.hrs;

            }while(obj.hrs<0 || obj.hrs>23);

            do//loops until correct input is entered for minutes

            {

                cout<<"\n Enter mins :  ";

                input>>obj.mins;

            }while(obj.mins<0 || obj.mins>59);

            do//loops until correct input is entered for seconds

            {

                cout<<"\n Enter sec :  ";

                input>>obj.sec;

            }while(obj.sec<0 || obj.sec>59);

        }

    //friend function overloading insertion operator '>>' for displaying Time objects        

        friend void operator<<(ostream &Output, Time &obj)    

        {

                Output<<"\n hrs   :  "<<obj.hrs;

                Output<<"\n mins :  "<<obj.mins;

                Output<<"\n sec :  "<<obj.sec;

        }

    //member function to check the equality of two time objects and return result after comparison

        bool operator==(Time t1)    

        {

                int total1 = hrs * 3600 + mins * 60 + sec;

                int total2 = t1.hrs * 3600 + t1.mins * 60 + t1.sec;

                if(total1==total2)

                        return true;

                else

                        return false;

        }

};

int main()

{

    //creating two time objects

        Time t1, t2;

        cout<<"\n Enter Time 01 ";

        cin>>t1;//take input for first object by using overloaded extraction operator (>>)

        cout<<"\n Time 01";

        cout<<t1;//display first object by using overloaded insertion operator (>>)

        cout<<"\n\n Enter Time 02 ";

        cin>>t2;//take input for second object by using overloaded extraction operator (>>)

        cout<<"\n Second Time ";

        cout<<t2;//display second object by using overloaded insertion operator (>>)

        if(t1==t2)//compare the two objects and display result

                cout<<"\n\n Same ";

        else

                cout<<"\n\n Different ";

        return 0;

}


