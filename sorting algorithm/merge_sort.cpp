#include<bits/stdc++.h>
using namespace std;
const int mx = 1e9+123;
vector<int>v(mx);

void mergesort(int l , int r){
    cout<<l<<" "<<r<<endl;
    if(l == r) return;
    int mid = (l+r)/2;
    mergesort(l,mid);
    //cout<<l<<" "<<r<<endl;
    mergesort(mid+1,r);
    //cout<<l<<" "<<r<<endl;
}


int main(){
    int n ; cin >> n;
    for(int i  = 1;  i <= n; i++) cin >> v[i];

    mergesort(1,n);
}
