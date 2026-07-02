#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 200005;
vector<int>adj[N],colour(N, 0),visited(N, 0);
bool possible=1;

void dfs(int u, int c){
    if(visited[u]){
        if(colour[u]!=c){
            possible=0;
        }
        return;
    }
    visited[u] = 1; 
    colour[u] = c;
    for(auto v : adj[u]){
        int x = 3-c;
        dfs(v,x);
    }
}

void solve(){
    int n,m; cin>>n>>m;
    for(int i=0; i<m; i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1,1);
    if(!possible){
        cout<<"IMPOSSIBLE"; return;
    }

    for(int i=1; i<=n; i++) cout<<"node -> "<<i<<" colour -> "<<colour[i]<<'\n';
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    // cin >> tc;
    while(tc--){
        solve();
    }
    return 0;
}