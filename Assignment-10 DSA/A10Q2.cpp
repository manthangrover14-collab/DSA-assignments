#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

vector<int> commonElements(vector<int>& A, vector<int>& B){
    unordered_set<int> s(A.begin(),A.end());
    vector<int> ans;
    for(int x:B){
        if(s.count(x)) ans.push_back(x);
    }
    return ans;
}

int main(){
    return 0;
}
