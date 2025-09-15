#include<iostream>
#include<stack>
#include<string>
using namespace std;
int precedence(char c){
    if(c=='+'||c=='-') return 1;
    if(c=='*'||c=='/') return 2;
    return 0;
}
int main(){
    string infix, postfix="";
    cin>>infix;
    stack<char> st;
    for(char c:infix){
        if(isalpha(c)) postfix+=c;
        else if(c=='(') st.push(c);
        else if(c==')'){ while(st.top()!='('){postfix+=st.top();st.pop();} st.pop();}
        else{
            while(!st.empty() && precedence(st.top())>=precedence(c)){ postfix+=st.top(); st.pop(); }
            st.push(c);
        }
    }
    while(!st.empty()){ postfix+=st.top(); st.pop(); }
    cout<<postfix;
}
