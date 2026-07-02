#include<bits/stdc++.h>
using namespace std;

const int N = 2e5+123;
vector<int>adj[N],height(N),depth(N);
void find_depth_height(int u, int par){
    
    for(auto v : adj[u]){    
        if(v==par) continue;
        depth[v] = depth[u]+1;
        find_depth_height(v,u);
        height[u] = max(height[u],height[v]+1);
    }
}

int main(){
    int n; cin>>n;
    for(int i=1; i<n; i++){
        int u,v; cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    find_depth_height(1,0);
    
    for(int i=1; i<=n; i++) cout<<height[i]<<" "<<depth[i]<<endl;

}