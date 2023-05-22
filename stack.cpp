/*Program that has the function checkbalance that accepts a string of code and checks whether braces are balanced

*/
#include<iostream>
#include<stack>
using namespace std;

int checkbalance(string code){
stack <char> stack;
for(int i=0;i<code.length();i++){
char c=code[i];
if(c=='('||c=='{'){
stack.push(c);
}
  else if(c==')'){
   if(stack.top()=='(')
       stack.pop();
    else 
      return i;
}
else if(c=='}'){
   if(stack.top()=='{')
       stack.pop();
    else 
      return i;
  }
 }
return 0;
}

int main(){
string code= "int main(){string code=""result= chackbalance(code);cout<<stack.top();}";
int result = checkbalance(code);//function call
cout<<"the result of the call:"<<result;
return 0;
}
