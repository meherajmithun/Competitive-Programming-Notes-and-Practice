#include<bits/stdc++.h>
using namespace std;
const int N = 100005;
vector<int>adj[N];
vector<int>visited(N);
int n,m; 

void dfs(int u){

    visited[u] = 1;
    cout<<"Visiting node : "<<u<<endl;

    for(auto v : adj[u]){
        
        if(!visited[v]){
            
            dfs(v);
            // cout<<""
            // visited[v] = 1;
        }
    }
}

int main(){
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
}