/*
#include<bits/stdc++.h>
using namespace std;
const int mx = 1e9+123;
bool isprime[mx];
//bitset<mx>isprime;
vector<int>prime;
#define int long long

void sieve(int n){
    for(int i = 2; i <= n; i++) isprime[i] = true; // initially declare all number from 2-n is prime
    for(int i = 2; i <= n; i++){
        for(int j = i+i; j <= n; j += i){
            isprime[j] = false;//make the number as non-prime or composite.
        }
    }
    for(int i = 2; i <= n; i++){
        if(isprime[i] == true){
            prime.push_back(i);
        }
    }
}

int32_t main(){
    int limit = 1e7;
    sieve(limit);
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mx = 1e9+123;
bool isprime[mx];
//bitset<mx>isprime;
vector<int>prime;

void sieve(int n){
    for(int i = 3; i <= n; i += 2) isprime[i] = true; // initially declare all number from 2-n is prime

    for(int i = 3; i*i <= (n); i += 2){
        if(isprime[i] == true){
            for(int j = i+i; j <= n; j += i){
                isprime[j] = false;//make the number as non-prime or composite.
            }
        }
    }
    prime.push_back(2);
    for(int i = 3; i <= n; i += 2){
        if(isprime[i] == true){
            prime.push_back(i);
        }
    }
}

int32_t main(){
    int limit = 120;
    sieve(limit);
    for(auto u : prime) cout<<u<<" ";
    cout<<endl;

}
