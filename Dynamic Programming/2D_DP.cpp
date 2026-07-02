#include<bits/stdc++.h>
using namespace std;

int fun(int day, int last,int n, vector<vector<int>>&cs, vector<vector<int>>&dp){
    if(day==n){
        return 0;
    }
    if(dp[day][last] !=-1) {return dp[day][last];}

    int mx = 0;
    for(int i=0; i<3; i++){
        if(i!=last){
            int earn = cs[day][i] + fun(day+1, i, n, cs,dp);
            mx = max(mx, earn);
        }
    }
    dp[day][last] = mx;
    return dp[day][last];
}

int main(){
    int n; cin>>n;
    vector<vector<int>>cs(n, vector<int>(3)), dp(n+1, vector<int>(4));
    for(int i=0; i<n; i++){
        for(int j=0; j<4; j++) dp[i][j] = -1;
    }
    for(int i=0; i<n; i++){
        cin>>cs[i][0]>>cs[i][1]>>cs[i][2];
    }
    // for(int i=0; i<n; i++){
    //     for(auto a : cs[i]) cout<<a<<" "; cout<<endl;
    // }
    cout<<fun(0, 3, n,cs, dp);
}