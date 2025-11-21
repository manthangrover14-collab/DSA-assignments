#include <iostream>
#include <vector>
using namespace std;

void dfsUtil(int u, vector<vector<int>>& g, vector<int>& vis){
    vis[u]=1;
    cout<<u<<" ";
    for(int v:g[u]){
        if(!vis[v]) dfsUtil(v,g,vis);
    }
}

void dfs(vector<vector<int>>& g, int start){
    vector<int> vis(g.size(),0);
    dfsUtil(start,g,vis);
}

int main(){
    return 0;
}
