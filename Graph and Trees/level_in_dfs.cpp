#include<bits/stdc++.h>
using namespace std;
const int N = 100005;
vector<int>adj[N];
vector<int>visited(N),level(N);

void dfs(int u){
    visited[u] = 1;

    for(auto v : adj[u]){
        
        if(!visited[v]){
            level[v] = level[u]+1;
            // cout<<level[v]<<endl;
            dfs(v);
            // visited[v] = 1;
        }
    }
}

int main(){
    int n,m; cin>>n>>m;
    for(int i=0; i<m; i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int src = 1;
    level[src] = 0;
    dfs(src);

    for(int i=1; i<=n; i++) cout<<level[i]<<" "; cout<<endl;



}