//You're given an array and an int k .
//You'r task is to find the smallest index of the array after put the int k the array is sorted.
//Example -> arr[] = {1,2,3,3,5,8,8,10,10,11} and x = 8.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , k ; cin >> n >> k;
    vector<int>v(n);
    for(auto &u : v) cin >> u;

    int ans = n, l = 0, r = n-1;
    while(l <= r){
        int mid = (l+r)/2;
        if(v[mid] >= k){
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid+1;
        }
    }
    cout<<lower_bound(v.begin() , v.end() , k)-v.begin()<<endl;
    cout<<ans<<endl;
}
