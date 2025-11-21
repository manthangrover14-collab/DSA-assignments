#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

class DSU{
public:
    vector<int> p, r;
    DSU(int n){ p.resize(n); r.resize(n,0); for(int i=0;i<n;i++) p[i]=i; }
    int find(int x){ if(p[x]==x) return x; return p[x]=find(p[x]); }
    void unite(int a,int b){
        a=find(a); b=find(b);
        if(a!=b){
            if(r[a]<r[b]) swap(a,b);
            p[b]=a;
            if(r[a]==r[b]) r[a]++;
        }
    }
};

struct Edge{
    int u,v,w;
};

vector<Edge> kruskal(int n, vector<Edge>& edges){
    sort(edges.begin(), edges.end(), [](Edge a,Edge b){return a.w<b.w;});
    DSU dsu(n);
    vector<Edge> mst;
    for(auto &e:edges){
        if(dsu.find(e.u)!=dsu.find(e.v)){
            dsu.unite(e.u,e.v);
            mst.push_back(e);
        }
    }
    return mst;
}

vector<Edge> prim(int n, vector<vector<pair<int,int>>>& g){
    vector<int> vis(n,0);
    priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int>>>> pq;
    pq.push({0,{0,-1}});
    vector<Edge> mst;
    while(!pq.empty()){
        auto x=pq.top(); pq.pop();
        int w=x.first;
        int u=x.second.first;
        int parent=x.second.second;
        if(vis[u]) continue;
        vis[u]=1;
        if(parent!=-1) mst.push_back({parent,u,w});
        for(auto &p:g[u]){
            pq.push({p.second,{p.first,u}});
        }
    }
    return mst;
}

int main(){
    return 0;
}
