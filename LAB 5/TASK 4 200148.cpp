#include <iostream>
using namespace std;


//class polynomial
class Polynomial{
        private:
 
        int *term;
        public:

        Polynomial(){
                term = new int[100];
                for(int i = 0;i<100;++i){
                        term[i]=0;
                }
        }
        ~Polynomial(){
                delete[] term;
        }
        
        int getCoefficient(int exponent){
                return term[exponent];
        }
        void setCoefficient(int coeff, int exponent){
                term[exponent]=coeff;
        }
        Polynomial operator + (Polynomial const &obj){
                Polynomial res;
 
                for(int i=0;i<100;++i){
                        res.term[i] = term[i] + obj.term[i];
                }
                return res;
        }
 
        Polynomial operator - (Polynomial const &obj){
                Polynomial res;
   
                for(int i=0;i<100;++i){
                        res.term[i] = term[i] - obj.term[i];
                }
                return res;
        }
        
        int operator == (Polynomial const &obj){
        
                for(int i=0;i<100;++i){
            
                        if(term[i] != obj.term[i])
                        return 0;
                }
                return 1;
        }
      
        void operator = (Polynomial const &obj){
       
                for(int i=0;i<100;++i){
                        term[i] = obj.term[i];
                }
        }
        Polynomial operator * (Polynomial const &obj){
                Polynomial res;
    
                for(int i=0;i<100;++i){
                        for(int j=0;j<100;++j)
                            res.term[i+j] += term[i] * obj.term[j];
                }
                return res;
        }

        void operator += (Polynomial const &obj){
                for(int i=0;i<100;++i){
                        term[i] += obj.term[i];
                }
        }

        void operator -= (Polynomial const &obj){
                for(int i=0;i<100;++i){
                        term[i] -= obj.term[i];
                }
        }

        void operator *= (Polynomial const &obj){
                Polynomial res;
      
                for(int i=0;i<100;++i){
                        for(int j=0;j<100;++j)
                            res.term[i+j] += term[i] * obj.term[j];
                }
                for(int i=0;i<100;++i){
                        term[i] = res.term[i];
                }
        }
        

        void display(){
           
            for(int i=100; i>=0; --i){
            
                if(term[i]>0)
                cout<<"+ "<<term[i]<<"x^"<<i<<" ";
                
                else if(term[i]<0)
                cout<<"- "<<-1*term[i]<<"x^"<<i<<" ";
            }
        }
};

int main(){
    //creating objects of Polynomial
    Polynomial a;
    Polynomial b;
    //temporary Polynomial object
    Polynomial c;
    
    //initializing a
    a.setCoefficient(2,4); // 2x^4
    a.setCoefficient(7,3); // 7x^3
    
    //initializing b
    b.setCoefficient(3,5); // 3x^5
    b.setCoefficient(2,3); // 2x^3
    b.setCoefficient(-2,2); // -2x^2
    
    //displaying initial expressions
    cout<<"Expression A: ";
    a.display();
    cout<<"\nExpression B: ";
    b.display();
    
    //displaying overloaded operations
    // +
    c = a + b;
    cout<<"\nA+B : ";
    c.display();
    // -
    c = a - b;
    cout<<"\nA-B : ";
    c.display();
    // *
    c = a * b;
    cout<<"\nA*B : ";
    c.display();
    // =
    c = a;
    cout<<"\nC = A: ";
    c.display();
    // ==
    cout<<"\nC==A : "<<(c==a);
    // +=
    a += b;
    cout<<"\nA+=B : ";
    a.display();
    // -=
    a -= b;
    cout<<"\nA-=B : ";
    a.display();
    // *=
    a *= b;
    cout<<"\nA*=B : ";
    a.display();
}
