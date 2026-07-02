// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define endl '\n'
#define nl '\n'
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define print(x) cout<<x<<'\n'
using namespace std;

void solve(){
    int n,w; cin>>n>>w;
    vector<int>v(n);
    for(auto &a : v) cin>>a;
    int sum=0,l=0,r=0;
    while(r<n){
        sum += v[r];
        while(sum>w and l<=r){
            sum -= v[l];
            l++;
        }
        if(sum>0 and w%sum==0){
            cout<<"YES\n";
            return;
        }
        r++;
    }
    cout<<"NO\n";
}

int32_t main(){
    fast
    int tc=1; //cin >> tc;
    while(tc--){
        solve();
    }
}