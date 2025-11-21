#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int firstNonRepeating(vector<int>& nums){
    unordered_map<int,int> mp;
    for(int x:nums) mp[x]++;
    for(int x:nums) if(mp[x]==1) return x;
    return -1;
}

int main(){
    return 0;
}
