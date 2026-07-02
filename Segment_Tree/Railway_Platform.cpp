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
const int N = 200005;
vector<int> st(4*N, 0), cs(N, 0);

void build(int si, int ss, int se){
    if(ss == se){
        st[si] = 0;  
        return;
    }
    int mid = (ss + se) >> 1;
    build(2*si, ss, mid);
    build(2*si+1, mid+1, se);
    st[si] = st[2*si] + st[2*si+1];
}
int query(int si, int ss, int se, int qs, int qe){
    if(ss > qe || se < qs) return 0;
    if(ss >= qs && se <= qe) return st[si];

    int mid = (ss + se) >> 1;
    return query(2*si, ss, mid, qs, qe)
         + query(2*si+1, mid+1, se, qs, qe);
}

void update(int si, int ss, int se, int idx){
    if(ss == se){
        st[si] += 1;
        return;
    }
    int mid = (ss + se) >> 1;
    if(idx <= mid) update(2*si, ss, mid, idx);
    else update(2*si+1, mid+1, se, idx);

    st[si] = st[2*si] + st[2*si+1];
}

void solve(){
    int n; cin>>n;
    vector<int>v(n);

    for(auto &a : v) cin>>a;
    vector<int>tmp=v;
    sort(all(tmp));
    tmp.erase(unique(all(tmp)),tmp.end());
    int k = sz(tmp);
    build(1,1,k);
    int ans = 0;

    for(int i = 0; i < n; i++){
        int lb = lower_bound(tmp.begin(),tmp.end(),v[i]) - tmp.begin() + 1;
        ans += query(1, 1, k, lb, k);

        update(1, 1, k, lb);
    }
    cout<<ans<<nl;
}

int32_t main(){
    fast
    int tc; cin >> tc;
    while(tc--){
        solve();
    }
}