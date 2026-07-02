// IN THE NAME OF ALLAH
#include <bits/stdc++.h>
using namespace std;
const int N = 200005;
vector<int>ans;
vector<int>adj[N],status(N, 0);
bool cycle=0;

void dfs(int u){
    if(cycle==1) return;
    status[u]=1; //visiting
    for(auto v : adj[u]){
        if(status[v]==0) dfs(v);//unvisited
        if(status[v]==1){
            cycle=1; return;
        }
    }
    status[u]=2;//visited
    ans.push_back(u);
}

void solve() {
    int n,m; cin>>n>>m;
    for(int i=0; i<m; i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
    }
    for(int i=1; i<=n; i++){
        if(!status[i]) dfs(i);
    }
    if(cycle) {
        cout<<"IMPOSSIBLE\n"; return;
    }
    reverse(ans.begin() , ans.end());
    for(auto a : ans) cout<<a<<" ";

}

int32_t main() {
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}