#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s; cin>>s;
    int sum = 0;
    vector<int>v;
    for(auto a : s){
        sum += (a-'0');
    }
    for(int i=0; i<(int)s.size(); i++){
        int x = s[i]-'0';
        if(i==0){
            x--;
            int mx = max(1LL*0,x);
            v.push_back(mx);
            continue;
         //   sum += max(x,1LL*0);
        }
        v.push_back(x);
    }
    // cout<<sum<<" ";
    // for(auto a : v) cout<<a<<" "; cout<<'\n';
    if(sum<=9){
        cout<<"0\n"; return;
    }
    sort(v.rbegin() , v.rend());
    int cnt = 0;
    for(auto a : v){
        sum -= a;
        cnt++;
        if(sum<=9){
            cout<<cnt<<'\n';
            return;
        }
    }

}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    cin >> tc;
    while(tc--){
        solve();
    }
    return 0;
}