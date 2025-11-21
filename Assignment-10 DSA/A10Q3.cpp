#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

unordered_map<int,int> frequency(vector<int>& nums){
    unordered_map<int,int> mp;
    for(int x:nums) mp[x]++;
    return mp;
}

int main(){
    return 0;
}
