#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    string s="DataStructure", rev="";
    stack<char> st;
    for(char c:s) st.push(c);
    while(!st.empty()){ rev+=st.top(); st.pop(); }
    cout<<rev;
}
