//You're given an array and an integer.Find the fast and last occurnce of the integer.
//arr = 2 8 8 8 8 8 11 13 . k = 8

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