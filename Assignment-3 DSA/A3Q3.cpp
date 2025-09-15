#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    stack<char> st;
    bool balanced=true;
    for(char c:s){
        if(c=='('||c=='{'||c=='[') st.push(c);
        else{
            if(st.empty()){ balanced=false; break; }
            char t=st.top(); st.pop();
            if((c==')'&&t!='(')||(c=='}'&&t!='{')||(c==']'&&t!='[')){ balanced=false; break; }
        }
    }
    if(!st.empty()) balanced=false;
    cout<<(balanced?"Balanced":"Not Balanced");
}
