// IN THE NAME OF ALLAH
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define int long long
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define print(x) cout<<x<<'\n'

int fun(int i, int j, vector<vector<int>>&dp, vector<vector<int>>&cs ){
    if(i<0 or j<0) return INT_MAX;
    if(i==0 and j==0) return cs[i][j];
    if(dp[i][j]!=-1) return dp[i][j];
    
    int up = fun(i, j-1, dp, cs);    
    int left = fun(i-1, j, dp, cs);

    dp[i][j] = min(up,left)+cs[i][j];
    return dp[i][j];
}

void solve() {
    int n,m; cin>>n>>m;
    vector<vector<int>>cs(n, vector<int>(m,0)),dp(n+123,vector<int>(m+123, -1));
    for(int i=0; i<n; i++){
        for(auto &a : cs[i]) cin>>a;
    }
    // for(int i=0; i<n; i++){
    //     for(auto a : cs[i]) cout<<a<<" "; cout<<nl;
    // }

    print(fun(n-1, m-1, dp, cs));
}

int32_t main() {
    fast
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        solve();
    }
    return 0;
}