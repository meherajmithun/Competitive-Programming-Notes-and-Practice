#include<bits/stdc++.h>
using namespace std;

int gcd(int a , int b){
    if(b == 0) return a;
    return gcd(b,a%b);
}
int main(){
    int tc ; cin >> tc;
    while(tc--){
        int a , b ;
        cin >> a >> b;
        int ans = gcd(a,b);
        cout<<"GCD of "<<a<<" "<<b<<" is :"<<ans<<endl;
    }
}