#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>cs;

void fun(int i, vector<int>&ans){
    if(i>=n){
        for(auto a : ans) cout<<a<<" "; cout<<endl;
        return;
    }
    ans.push_back(cs[i]);
    fun(i+1, ans);
    ans.pop_back();
    fun(i+1, ans);
}

int main(){
    cin>>n; cs.resize(n);
    for(auto &a : cs) cin>>a;
    vector<int>ans;
    fun(0,ans);
}