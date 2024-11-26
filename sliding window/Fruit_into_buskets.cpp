//You're given an array.Find max longest sub array with at most k types of numbers.
//the array is 3 3 3 1 2 1 1 2 3 3 4 . k = 2 ; ans = 5;

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , k ; cin >> n >> k;
    vector<int>v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int l = 0, r = 0 , maxlen = 0;
    map<int,int>mp;

    while(r < n){
        //r++;
        mp[v[r]]++;
        if(mp.size() > k){
            while(mp.size() > k){
                mp[v[l]]--;
                if(mp[v[l]] == 0) mp.erase(v[l]);
                l++;
            }
        }
        if(mp.size() <= k){
            maxlen = max(maxlen,r-l+1);
        }
        r++;
    }
    cout<<maxlen<<endl;
}
