//Find longest substring with k distinct character;
//For example  s = aaabbccd k = 2;

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s ; cin >> s;
    int k ; cin >> k;
    int l = 0, r = 0 , maxlen = 0;

    map<char,int>mp;
    while(r < s.size()){
        mp[s[r]]++;
        if(mp.size() > k){
            while(mp.size() > k){
                mp[s[l]]--;
                if(mp[s[l]] == 0) mp.erase(s[l]);
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
