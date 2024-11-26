//print the divisor number

#include<bits/stdc++.h>
using namespace std;
const int mx = 1e7+123;
vector<int>v[mx];

int main(){
    int limit = 10;
    for(int i = 1; i <= limit; i++){
        for(int j = i; j <= limit; j += i){
            v[j].push_back(i);
        }
    }
    int sum ;
    for(int i = 1; i <= limit; i++){
        cout<<i<<": ";
        sum = 0;
        for(auto u : v[i]) cout<<u<<" ";
        cout<<endl;
    }
}

/*
//print sum of divisor

#include<bits/stdc++.h>
using namespace std;
const int mx = 1e7+123;
vector<int>v[mx];

int main(){
    int limit = 10;
    for(int i = 1; i <= limit; i++){
        for(int j = i; j <= limit; j += i){
            v[j].push_back(i);
        }
    }
    int sum ;
    for(int i = 1; i <= limit; i++){
        cout<<i<<": ";
        sum = 0;
        for(auto u : v[i]) sum += u;
        cout<<sum<<endl;
    }
}
*/