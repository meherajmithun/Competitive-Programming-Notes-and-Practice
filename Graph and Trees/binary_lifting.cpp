#include<bits/stdc++.h>
using namespace std;
const int N = 200005, LOG=21;
vector<int>adj[N] , depth(N, 0),parent(N,0);
int up[N][LOG];
int n,query;
 
void pre(){
    for(int v=1; v<=n; v++){
        up[v][0] = parent[v];
        for(int j=1; j<LOG; j++){
            up[v][j] = up[ up[v][j-1] ][j-1];
        }
    }
}
 
void dfs(int u, int par){
    parent[u] = par;
    for(auto v : adj[u]){
        if(v==par) continue;
        depth[v] = depth[u]+1;
        dfs(v,u);
    }
}
 
int k_th_ancesstor(int v, int k){
    if(depth[v]<k) return -1;
    for(int j=0; j<LOG; j++){
        if(k&(1<<j)){ //check bit is on
            v = up[v][j];
        }
    }
    return v;
}
 
int main(){
    cin>>n>>query;
    for(int i=2; i<=n; i++){
        int u; cin>>u;
        adj[u].push_back(i);
        adj[i].push_back(u);
    }
    dfs(1,1);
    pre();
    while(query--){
        int v,k; cin>>v>>k;
        cout<<k_th_ancesstor(v,k)<<'\n';
    }
    // for(int i=1; i<=n; i++) cout<<parent[i]<<" "; cout<<'\n';
}