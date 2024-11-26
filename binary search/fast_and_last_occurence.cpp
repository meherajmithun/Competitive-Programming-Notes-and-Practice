//You're given an array and an integer.Find the fast and last occurnce of the integer.
//arr = 2 8 8 8 8 8 11 13 . k = 8
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    int k ; cin >> k;
    int arr[8] = {2,8,8,7,8,8,11,13};
    int last=-1 , fast=-1;
    int l = 0 , r = 8;
    int lb = lower_bound(arr,arr+8,k)-arr;
    int up = upper_bound(arr,arr+8,k)-arr;
    if(arr[lb] == k and lb < 8){
        fast = lb;
    }
    if(arr[up-1] == k and up < 8){
        last = up;
    }
    //cout<<lb<<" "<<up<<endl;
    cout<<fast<<" "<<last<<endl;
}
*/
#include<bits/stdc++.h>
using namespace std;

int fast_occur(vector<int>&v,int n ,int k){
    int fast = -1;
    int l = 0,r=n-1;
    while( l <= r){
        int mid = (l+r)/2;
        if(v[mid] == k){
            fast = mid;
            r = mid-1;
        }
        else if(v[mid] < k){
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    return fast;
}
int last_occur(vector<int>&v, int n , int k){
    int  last = -1;
    int l = 0,r=n-1;
    while( l <= r){
        int mid = (l+r)/2;
        if(v[mid] == k){
            last = mid;
            l = mid+1;
        }
        else if(v[mid] < k){
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    return last;
}
int main(){
    int n ; cin >> n;
    int k ; cin >> k;
    vector<int>v(n);
    for(auto &u : v) cin >> u;
    int fast = fast_occur(v,n,k);
    int last = last_occur(v,n,k);
    cout<<fast<<" "<<last<<endl;
}