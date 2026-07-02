#include<bits/stdc++.h>
using namespace std;
const int N = 100005;
int n,k;
vector<int>cs,ans;
int dp[101][N];

void fun(int i, int sum){
    if(dp[i][sum] != -1) return;
    dp[i][sum] = 1;
    if(i==n){
        ans.push_back(sum);
        return;
    }
    fun(i+1, sum+cs[i]);
    fun(i+1, sum);
}

int main(){
    memset(dp, -1, sizeof(dp));
    cin>>n;
    cs.resize(n);
    for(auto &a: cs) cin>>a;
    int sum = 0;
    fun(0,sum);
    cout<<ans.size()-1<<endl;
    sort(ans.begin() , ans.end());
    for(auto a : ans){
        if(a>0) cout<<a<<" ";
    }

}