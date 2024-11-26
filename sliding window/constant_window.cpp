//You are given an array with positive or negative value and an integer k.
//Your task is to find out the maximum sum using k elements consequitevely.

//For example : [-1,2,3,3,4,5,-1] and k = 4.let's solve it
//two pointer . TC -> O(n).

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , k; cin >> n >> k ;
    vector<int>v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    //lets breakdown the solution.

    int sum = 0 ,ans = 0;

    int l = 0, r = k-1;
    for(int i = 0; i < k; i++) sum += v[i];
    while(r < n){
        sum -= v[l];
        l++;
        r++;
        sum += v[r];
        ans = max(ans,sum);
       // cout<<sum<<endl;
    }
    cout<<ans<<endl;
}
