//You're given an array and an integer k.you've to find the the longest sum < k
//for example k 14
//2 5 1 7 10


//using brute force(TC -> O(n*n) ).
/*
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v = {72,56,29,2,100};
    int k = 14;

    int maxlen = 0;
    int sum = 0;
    for(int i = 0; i < v.size(); i++){
        sum = 0;
        for(int j = i; j < v.size(); j++){
            sum += v[j];
            if(sum <= k){
                maxlen = max(maxlen,j-i+1);
            }
        }
    }
    cout<<"Maxlength is : "<<maxlen<<endl;
}

*/
//using two pointer . TC -> O(n).


#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v = {2,5,1,7,10};
    int k = 14;
    int l = 0 , r = 0;
    int sum = 0,maxlen = 0;

    while(r < v.size()){
        sum += v[r];
        if(sum > k){
            sum -= v[l];
            l++;
        }
        if(sum <=  k){
            maxlen = max(maxlen,r-l+1);
            r++;
        }
    }
    cout<<maxlen<<endl;
}










