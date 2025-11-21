#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(vector<vector<int>>& g, int start){
    int n=g.size();
    vector<int> vis(n,0);
    queue<int> q;
    q.push(start);
    vis[start]=1;
    while(!q.empty()){
        int u=q.front(); q.pop();
        cout<<u<<" ";
        for(int v:g[u]){
            if(!vis[v]){
                vis[v]=1;
                q.push(v);
            }
        }
    }
}

int main(){
    return 0;
}
