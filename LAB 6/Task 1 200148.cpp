#include<iostream>
using namespace std;

class Account
{

    public:
        double AccountBalance;
        string customerName;
        int Acc_No;
        static int count;

    public:
        Account(double initialBal, string name)
        {
            if (initialBal < 0.0){
                cout <<"\nThe initial balance was invalid"<<endl;
                AccountBalance = 0.0;
            }
            else{AccountBalance = initialBal;
            }

            customerName = name;
            count += 1;
            Acc_No = count;
        }

        // getter
        double getBalance()
        {
        return AccountBalance;
        }

        int getAccountNo()
        {
            return Acc_No;
        }

        string getName()
        {
            return customerName;
        }

        void Credit(double amount)
        {
            AccountBalance += amount;
        }

        void Debit(double amount)
        {
            if(amount > AccountBalance)
            {
                cout<< "Debit amount exceeded account balance"<<endl;
            }
            else{
                AccountBalance -= amount;
            }
        }

        
};

int Account::count = 100;

class CreditCardAccount: public Account
{
    private:
        int pinNumberSet;
    
    public:
        CreditCardAccount(double initialBal, string name, int pin):Account(initialBal, name)
        {
            pinNumberSet = pin;
        }

        void resetpin(int pin)
        {
            pinNumberSet = pin;
        }
};

class CheckingAccount: public Account
{
    private:
        double feeCharged;

    public:
        CheckingAccount(double initialBal, string name, double fee):Account(initialBal, name)
        {
            feeCharged = fee;
        }

        void Credit(double amount)
        {

            Account::Credit(amount);
            AccountBalance -= feeCharged;
        }

        void Debit(double amount)
        {
            double reduced = amount + feeCharged;
            Account::Debit(reduced);
        }
};

int main()
{
    CreditCardAccount c1(2000, "Ahmed", 7889);
    cout<<"Account No - " << c1.getAccountNo() <<endl;
    cout << "Account Holder: "<< c1.getName() <<endl;
    cout<<"Account Type: Credit Card Account"<<endl;
    cout << "Balance: "<< c1.getBalance()<<endl;

    c1.Credit(500);
    cout << "\nAfter credit amount 500"<< endl;
    cout<<"Account No - " << c1.getAccountNo() <<endl;
    cout << "Account Holder: "<< c1.getName() <<endl;
    cout<<"Account Type: Credit Card Account"<<endl;
    cout << "Balance: "<< c1.getBalance()<<endl;

    c1.Debit(200);
    cout << "\nAfter Debit amount 200"<< endl;
    cout<<"Account No - " << c1.getAccountNo() <<endl;
    cout << "Account Holder: "<< c1.getName() <<endl;
    cout<<"Account Type: Credit Card Account"<<endl;
    cout << "Balance: "<< c1.getBalance()<<endl;

    
    CheckingAccount checking1(-1, "Khalid", 10.0);
    cout<<"\nAccount No - " << checking1.getAccountNo() <<endl;
    cout << "Account Holder: "<< checking1.getName() <<endl;
    cout<<"Account Type: Checking Account"<<endl;
    cout << "Balance: "<< checking1.getBalance()<<endl;

    checking1.Credit(2000);
    cout << "After credit amount 2000"<< endl;
    cout<<"\nAccount No - " << checking1.getAccountNo() <<endl;
    cout << "Account Holder: "<< checking1.getName() <<endl;
    cout<<"Account Type: Checking Account"<<endl;
    cout << "Balance: "<< checking1.getBalance()<<endl;

    checking1.Debit(1000);
    cout << "After Debit amount 1000"<< endl;
    cout<<"\nAccount No - " << checking1.getAccountNo() <<endl;
    cout << "Account Holder: "<< checking1.getName() <<endl;
    cout<<"Account Type: Checking Account"<<endl;
    cout << "Balance: "<< checking1.getBalance()<<endl;
    
    return 0;
}

