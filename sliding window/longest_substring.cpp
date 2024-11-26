//Find the longest substring without repeating character.
//ex - s = "cadbzabcd"

//Brute force solution ->O(n*n);

/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s ; cin >> s;
    int maxlen = 0;
    int hash[256] ={0};
    for(int i = 0; i < s.size(); i++){
        for(int j = i; j < s.size(); j++){
            if(hash[s[j]] == 1) break;
            else{
                hash[s[j]] = 1;
                maxlen = max(maxlen,j-i+1);
            }
        }
    }
    cout<<maxlen<<endl;
}
*/

//sliding window solution : tc-> O(N)
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s ; cin >> s;
    int l = 0, r = 0;
    int maxlen = 0;
    int hash[256] = {-1};
    while(r < s.size()){
        if(hash[s[r]] != -1){
            if(hash[s[r]] >= l){
                l = hash[s[r]]+1;
              //  cout<<l<<endl;
            }
        }
        maxlen = max(maxlen,r-l+1);
        hash[s[r]] = r;
       //s cout<<l<<r<<hash[s[r]]<<endl;
        r++;
    }
    cout<<maxlen<<endl;
}