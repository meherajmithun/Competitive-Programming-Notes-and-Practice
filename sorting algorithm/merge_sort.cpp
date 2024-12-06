///let the array = {3,1,2,4,1,5,6,2,4,0}

#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&v , int l , int h , int mid){
    vector<int>v2;
    int i = l , j = mid+1;
    while(i <= mid and j <= h){
        if(v[i] <= v[j]){
            v2.push_back(v[i]);
            i++;
        }
        else{
            v2.push_back(v[j]);
            j++;
        }
    }
    if(i <= mid){
        while(i <= mid){
            v2.push_back(v[i]);
            i++;
        }
    }
    else if(j <= h){
        while(j <= h){
            v2.push_back(v[j]);
            j++;
        }
    }
    for(int i = 0;  i < v2.size(); i++){
        v[l+i] = v2[i];
    }
}
void mergesort(vector<int> &v , int l , int h){
    if(l == h) return ;
    int mid = (l + h)/2;
    mergesort(v,l,mid);
    mergesort(v,mid+1, h);
    merge(v,l,h,mid);
}

int main(){
    vector<int> v = {3,1,2,4,1,5,6,2,4};
    int l = 0 , h = v.size()-1;
    mergesort(v,l,h);
    for(auto u :  v) cout<<u<<" ";
}