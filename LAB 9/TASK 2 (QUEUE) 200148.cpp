#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<int>q;
    int ch=1;
    while(ch){
        cout<<"\nEnter one of the following choices \n1. Push \n2. Pop \n3. Peek \n4. Check if queue is empty \n0. Exit\n";
        cin>>ch;
        if(ch==1){
            int num;
            cout<<"Enter a number to push\n";
            cin>>num;
            q.push(num);
        }
        else if(ch==2){
            if(q.empty())
                cout<<"\nThe queue is empty\n";
            else{
                int num=q.front();
                cout<<"Popped value is "<<num<<endl;
                q.pop();
            }
        }else if(ch==3){
            if(q.empty())
                cout<<"\nThe queue is empty\n";
            else{
                int num=q.front();
                cout<<"Front value in queue is "<<num<<endl;
                q.pop();
            }
        }
        else if(ch==4){
            if(q.empty()){
                cout<<"\nThe queue is empty\n";
            }
            else{
                cout<<"\nThe queue is not empty\n";  
            }
        }
        else if(ch==0)
            break;

    }
    return 0;
}
