#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> dijkstra(int n, vector<vector<pair<int,int>>>& g, int src){
    vector<int> dist(n,1e9);
    dist[src]=0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({0,src});
    while(!pq.empty()){
        auto x=pq.top(); pq.pop();
        int d=x.first, u=x.second;
        if(d!=dist[u]) continue;
        for(auto &p:g[u]){
            int v=p.first, w=p.second;
            if(dist[u]+w<dist[v]){
                dist[v]=dist[u]+w;
                pq.push({dist[v],v});
            }
        }
    }
    return dist;
}

int main(){
    return 0;
}
