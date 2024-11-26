#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &u : v)
        cin >> u;

    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++) {
        mp[v[i]].push_back(i + 1);  // Storing 1-based indices
    }

    // Print indices for each unique value
    for (const auto &entry : mp) {
       // cout << "Value " << entry.first << ": ";
        for (int idx : entry.second) {
            cout << idx << " ";
        }
        cout << endl;
    }

    return 0;
}
