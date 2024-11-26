//Print number of divisor.

#include<bits/stdc++.h>
using namespace std;
const int mx = 1e7+123;
int cnt[mx];

int main(){
    int limit = 10;
    for(int i = 1; i <= limit; i++){
        for(int j = i; j <= limit; j += i){
            //This is called contribution teachnique
            cnt[j]++;
        }
    }
    for(int i = 1; i <= limit; i++){
        cout<<i<< " "<<cnt[i]<<endl;
    }
}