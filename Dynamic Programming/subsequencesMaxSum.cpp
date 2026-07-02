// #include<bits/stdc++.h>
// using namespace std;
// const int N = 100005;
// int n;
// vector<int>v,dp(N, -1);

// int fun(int i){
//     if(dp[i]!=-1) return dp[i];
//     if(i>=n) return 0;
//     int pick = v[i]+fun(i+2);
//     int not_pick = fun(i+1);
//     dp[i] = max(pick,not_pick);
//     return dp[i];
// }

// int main(){
//     cin>>n;
//     v.resize(n);
//     for(auto &a : v) cin>>a;
//     cout<<fun(0)<<endl;
// }

#include<bits/stdc++.h>
using namespace std;
const int N = 100005;
int n;
vector<int>v,dp(N, -1);

int main(){
    cin>>n;
    v.resize(n);
    for(auto &a : v) cin>>a;
    dp[0] = v[0];
    for(int i=1; i<n; i++){
        int take = v[i];
        if(i>1) take += dp[i-2];
        int not_take = dp[i-1];

        dp[i] = max(take,not_take);
    } 
    cout<<dp[n-1]<<'\n';
}