//You're given two array.count the common element in both array
//Array is sorted

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin >> n;
    vector<int>v1(n) , v2(n);
    for(auto &u : v1) cin >> u;
    for(auto &u : v2) cin >> u;
    int l = 0 , r = 0;
    int cnt = 0;
    while(l < n and r < n){
        if(v1[l] == v2[r]){
            cnt++;
            l++;
            r++;
        }
        else if(v1[l] < v2[r]){
            l++;
        }
        else{
            r++;
        }
    }
    cout<<cnt<<endl;
}