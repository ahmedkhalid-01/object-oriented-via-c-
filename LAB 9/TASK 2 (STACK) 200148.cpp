#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int>st;
    int ch=1;
    while(ch){
        cout<<"\nEnter one of the following choices \n1. Push \n2. Pop \n3. Peek \n4. Check if stack is empty \n0. Exit\n";
        cin>>ch;
        if(ch==1){
            int num;
            cout<<"Enter a number to push\n";
            cin>>num;
            st.push(num);
        }
        else if(ch==2){
            if(st.empty())
                cout<<"\nThe stack is empty\n";
            else{
                int num=st.top();
                cout<<"Popped value is "<<num<<endl;
                st.pop();
            }
        }else if(ch==3){
            if(st.empty())
                cout<<"\nThe stack is empty\n";
            else{
                int num=st.top();
                cout<<"Top value is "<<num<<endl;
                st.pop();
            }
        }
        else if(ch==4){
            if(st.empty()){
                cout<<"\nThe stack is empty\n";
            }
            else{
                cout<<"\nThe stack is not empty\n";  
            }
        }
        else if(ch==0)
            break;

    }
    return 0;
}
