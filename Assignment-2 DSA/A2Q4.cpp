#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string a="Hello ", b="World";
    a+=b;
    cout<<"Concatenate: "<<a<<endl;

    string s="Hello";
    reverse(s.begin(),s.end());
    cout<<"Reverse: "<<s<<endl;

    string t="Hello World", noVowels="";
    for(char c:t)
        if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u'&&c!='A'&&c!='E'&&c!='I'&&c!='O'&&c!='U')
            noVowels+=c;
    cout<<"No vowels: "<<noVowels<<endl;

    string arr[]={"banana","apple","cherry"};
    sort(arr, arr+3);
    cout<<"Sorted: ";
    for(string str:arr) cout<<str<<" ";
    cout<<endl;

    char c='A';
    c = c + 32;
    cout<<"Upper to lower: "<<c<<endl;
}
