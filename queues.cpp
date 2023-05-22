#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int checkBalance(string code){
    stack <char> stack;
    for(int i=0;i<code.length();i++){
        char c=code[i];
        if(c=='('||c=='{'){
            stack.push(c);
        }
        else if(c==')'){
            if(stack.empty() || stack.top()!='(')
                return i;
            else
                stack.pop();
        }
        else if(c=='}'){
            if(stack.empty() || stack.top()!='{')
                return i;
            else 
                stack.pop();
        }
    }
    return 0;
}

int largest(stack<int>s)
{
    int maxval =s.top();
    s.pop();
    while (!s.empty()) {
        int next=s.top();
        s.pop();
        maxval= max(maxval,next);
    }
    return maxval;   
}

int main(){
    /*string code= "int main(){string code=""result= checkBalance(code);cout<<stack.top();}";
    int result = checkBalance(code);//function call
    cout<<"the result of the call:"<<result;*/
    /*stack<int>stck;
    stck.push(8);
    stck.push(3);
    stck.push(8);
    stck.push(16);
    stck.push(6);
    cout<<"the largest item in the stack"<<largest(stck);
    //test status of the stack 
    cout<<"\n\n"<<stck.top();
    stck.pop();*/

    //queues
    queue<int>q;
    for(int i=1;i<=6;i++){
        q.push(i);
    }
    cout<<"\n\nsize:"<<q.size()<<endl; 
    for(int i=0;i<q.size();i++){
        cout<<q.front()<<"";
        q.pop();
    }    
    cout<<"\n\nsize:"<<q.size()<<endl; 

    return 0;
}
