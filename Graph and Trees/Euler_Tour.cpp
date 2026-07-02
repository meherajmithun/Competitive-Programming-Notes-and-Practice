#include<bits/stdc++.h>
using namespace std;
const int N = 200005;
vector<int>FT(N,0),in(N,0),out(N,0),adj[N];

void dfs(int u, int par, int &c){
    in[u]=c; FT[c] = u; c++;
    for(auto v : adj[u]){
        if(v==par) continue;
        dfs(v,u,c);
    }
    out[u] = c; FT[c] = u; c++;
}


int main(){
    int n; cin>>n;
    for(int i=1; i<n; i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int c=1;
    dfs(1,-1,c);
    cout<<"Indegree -> "; for(int i=1; i<=n; i++) cout<<in[i]<<" "; cout<<endl;
    cout<<"Outdegree -> "; for(int i=1; i<=n; i++) cout<<out[i]<<" "; cout<<endl;
    cout<<"Flat Tree -> "; for(int i=1; i<=2*n; i++) cout<<FT[i]<<" "; cout<<endl;
}