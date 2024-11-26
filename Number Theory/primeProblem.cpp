#include<bits/stdc++.h>
using namespace std;
const int mx = 1e8+123;
bool isprime[mx];
vector<int>prime;

void sieve(int limit){
    vector<int>a;
    vector<int>b;
    for(int i = 2; i <= limit; i++) isprime[i] = true;

    for(int i = 3; i*i <= limit; i += 2){
        for(int j = i+i; j <= limit; j += i){
            if(isprime[j] == true){
                isprime[j] = false;
            }
        }
    }
    for(int i = 3; i <= limit; i += 2){
        if(isprime[i] == true){
            a.push_back(i);
            if(abs(limit - i) > 2){
                b.push_back(abs(limit-i));
            }
        }
    }
    
    cout<<limit<<" = "<<a[0]<<" + "<<b[0]<<endl;
}

void solve(){
    int n ; cin >> n;
    sieve(n);
}

int main(){
    int tc ; 
    while(cin >> tc){
        if(tc == 0) break;
        solve();
    }
}