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
const int N = 10000;
vector<int>dp(N+123, -1);

int fibo(int n){
    if(dp[n]!=-1) return dp[n];
    if(n==0) {
        dp[n] = 0; return dp[n];
    }
    if(n==1){
        dp[n]=1; return dp[n];
    }
    dp[n] = fibo(n-1)+fibo(n-2);
    return dp[n];
}
void solve() {
    int n; cin>>n;
    cout<<fibo(n)<<nl;
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