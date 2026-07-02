#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    // int t;
    // cin >> t;
    // while(t--)
    {
        int n;
        cin >> n;
        vector<int>v;
        int sum = 0;
        if(n == 18)
        {
            cout << 0 << endl;
            return;
        }
        while(n > 10)
        {
            sum += (n % 10);
            v.push_back(n % 10);
            n /= 10;
        }
        //cout << n << endl;
        sum += n;
        sort(v.rbegin(), v.rend());
        // for(auto c: v)
        // {
        //     cout << c << " ";
        // }
        // cout << endl;
        //cout << sum << endl;
        if(sum < 10)
        {
            cout << 0 << endl;
            return;
        }
        int cnt = 0;
        for(int i = 0; i < v.size();)
        {
            int x = sum - v[i];
            int y = sum - (n - 1);
            if(y < x)
            {
                sum -= (n-1);
                n = 1;
                cnt++;
            }
            else {
                sum -= v[i];
                cnt++;
                i++;
            }
            if(sum < 10)
            {
                cout << cnt << endl;
                return;
            }
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