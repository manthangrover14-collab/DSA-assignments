#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

bool containsDuplicate(vector<int>& nums){
    unordered_set<int> s;
    for(int x:nums){
        if(s.count(x)) return true;
        s.insert(x);
    }
    return false;
}

int main(){
    return 0;
}
