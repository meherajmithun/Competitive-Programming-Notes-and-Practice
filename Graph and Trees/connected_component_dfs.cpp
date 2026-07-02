#include<bits/stdc++.h>
using namespace std;
const int N = 100005;
vector<int>adj[N];
vector<int>visited(N);
int n,m; 

void dfs(int u){
    visited[u] = 1;

    for(auto v : adj[u]){
        
        if(!visited[v]){
            
            dfs(v);
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
    int cnt = 0;
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            dfs(i);
            cnt++;
        }
    }
    cout<<cnt<<endl;
}