#include<bits/stdc++.h>
using namespace std;
const int N = 200005;
vector<int>adj[N],visited(N,0), previous_node(N, 0);
bool cycle_found=false;
int cycle_start,cycle_end;

void dfs(int u, int pre){
    // if(cycle_found) return;
    if(visited[u]){
        if(cycle_found) return;
        cycle_start = u;
        cycle_end = pre;
        cycle_found=true;
        return;
    }
    visited[u]=1;
    previous_node[u] = pre;
    for(auto v : adj[u]){
        if(v==pre) continue;
        dfs(v,u);
    }
}


int main(){
    int n,m; cin>>n>>m;
    adj->resize(n+1);
    for(int i=0; i<m; i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=1; i<=n; i++){
        if(!visited[i]) dfs(i,0);
    }
    if(cycle_found) {
        cout<<"Cycle detected\n";
        vector<int>path;
        int node = cycle_end;
        // cout<<cycle_start<<" "<<cycle_end<<'\n';
        // for(int i=1; i<=n; i++) cout<<i<<" -> "<<previous_node[i]<<" \n"; cout<<'\n';
        while(1){
            path.push_back(node);
            if(node==cycle_start) break;
            node = previous_node[node];
        }
        reverse(path.begin() , path.end());
        for(auto a : path) cout<<a<<" -> ";
    }
    else cout<<"No Cycle\n";
}