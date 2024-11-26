
// IN THE NAME OF ALLAH

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
#define slow ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define endl '\n'
#define pb push_back
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define int long long

int32_t main() {
    slow;
    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        int n;
        cin >> n;
        vi v(n);
        int sum = 0;

        for (auto &u : v) {
            cin >> u;
            sum += u;
        }

        if (sum > 9)
            cout << "Case " << i << ": perfectus" << endl;
        else
            cout << "Case " << i << ": invalidum" << endl;
    }
    return 0;
}
