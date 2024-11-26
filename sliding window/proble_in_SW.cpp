//You're given an array .calculate the minimum sum of k , consequituve element.
//arr = -2 10 1 3 2 -1 4 5 . k = 3;

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , k ; cin >> n >> k;

    vector<int>v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int minsum = 0;
    int sum = 0;
    for(int i = 0; i < k; i++) sum += v[i];
    minsum = sum;
    int l = 0, r = k-1;
    while(r < n){
        sum -= v[l];
        l++;
        r++;
        sum += v[r];
        minsum = min(minsum,sum);
    }
    cout<<minsum<<endl;
}
