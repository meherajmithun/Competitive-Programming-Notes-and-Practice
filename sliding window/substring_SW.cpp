//You're given a string.find out the longest substring without repeating elements.
//cabdzabcd
//Tc -> O(n*n)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin >>n;
    string s ; cin >>s;
    int maxlen = 0;
    int hash[255] = {0};
    string sub = "";
    for(int i =0; i < n; i++){
        for(int j = i; j < n; j++){
            if(hash[s[j]] == 1) break;
            else{
                hash[s[j]]=1;
                maxlen = max(maxlen , j-i+1);
            }
        }
    }
    cout<<maxlen<<endl;

}

