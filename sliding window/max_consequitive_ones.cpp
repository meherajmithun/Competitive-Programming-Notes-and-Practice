//Longest binary-subarray with at most k zeros;
//Brute force solution : tc->O(n^2)
//Example arr[] = {1,1,1,0,0,0,1,1,1,1,0,0,0} ,k = 2;

/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , k; cin >> n >> k;
    vector<int>v(n);
    for(auto &u : v) cin >> u;
    int maxlen = 0;
    for(int i = 0; i < n; i++){
        int zeros = 0;
        for(int j = i; j < n; j++){
            if(v[j] == 0) zeros++;
            if(zeros > k) break;
            else{
                maxlen = max(maxlen,j-i+1);
            }
        }
    }
    cout<<maxlen<<endl;
}
*/
//sliding window solution : tc->O(N);

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ,  k ; cin >> n >> k;
    vector<int>v(n);
    for(auto &u : v) cin >> u;
    int l = 0 , r = 0;
    int maxlen = 0,zeros = 0;
    while(r < n){
        if(v[r] == 0) zeros++;
        if(zeros > k){
            while(zeros > k){
                if(v[l] == 0) zeros--;
                l++;
            }
        }
        maxlen = max(maxlen,r-l+1);
        r++;
    }
    cout<<maxlen<<endl;
}