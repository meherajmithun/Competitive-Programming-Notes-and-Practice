#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a , pair<int,int>b){
  if(a.second < b.second) return true;
  else if(a.second > b.second) return false;
  else if(a.first < b.first) return true;
  else return false;
}
int main(){
  vector<pair<int,int>> p = {{0,1},{1,4},{1,2},{2,3}};
  
  sort(p.begin() , p.end() , cmp);
  for(auto it: p){
    cout<<it.first<<" "<<it.second<<endl;
  }
}