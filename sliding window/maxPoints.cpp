//You're given an array and an integer k . your task is to find out the maximum sum using k elemenets consequitevely.
//you can picked some elemenets from front and some elemenets from back or you can picked all elements from front and all elements from back.

//let array = 6 2 3 4 7 2 1 7 1 and k = 4;

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ,k; cin >> n >> k ;
    vector<int>v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int leftSum = 0 , rightSum = 0;
    int maxsum = 0;
    for(int i  = 0; i < k; i++) leftSum += v[i];

    maxsum = leftSum;
   // cout<<leftSum<<endl;
    int last = n-1;
    for(int i = k-1 ; i >= 0; i--){
        leftSum -= v[i];
        rightSum += v[last];
        last--;
        maxsum = max(maxsum,leftSum+rightSum);
    }
    cout<<maxsum<<endl;
}
