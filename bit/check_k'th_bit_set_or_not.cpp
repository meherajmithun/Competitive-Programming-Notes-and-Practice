#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int k; cin>>k;
    if(((n>>k)&1)) cout<<k<<"'th bit is set\n";
    else cout<<k<<"'th bit is not set\n";
}