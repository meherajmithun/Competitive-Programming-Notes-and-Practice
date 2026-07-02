#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 200005;
vector<int>adj[N], subtree(N, 0), dis(N, 0), ans(N, 0);
int n; 

void dfs(int u, int par){
    subtree[u] = 1;
    for(auto v : adj[u]){
        if(v==par) continue;
        dfs(v,u);
        subtree[u] += subtree[v];
        dis[u] +=(subtree[v]+dis[v]); 
    }
}

void dfs2(int u, int par){
    ans[u] = ans[par]-subtree[u]-dis[u]+n-subtree[u]+dis[u];
    for(auto v : adj[u]){
        if(v==par) continue;
        dfs2(v,u);
    }
}


int32_t main(){
    cin>>n;
    for(int i=1; i<n; i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1,0);
    ans[1] = dis[1];
    for(auto i : adj[1]){
        dfs2(i,1);
    }
    // for(int i=1; i<=n; i++) cout<<subtree[i]<<" "; cout<<'\n';
    // for(int i=1; i<=n; i++) cout<<dis[i]<<" "; cout<<'\n';
    for(int i=1; i<=n; i++) cout<<ans[i]<<" "; cout<<'\n';
}
