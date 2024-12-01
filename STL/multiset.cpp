// propert : 
// sorted but not unique

#include<bits/stdc++.h>
using  namespace std;

int main(){
    multiset<int>ms;
    ms.insert(12);
    ms.insert(11);
    ms.insert(1);
    ms.insert(12);
    ms.insert(13);
    //for(auto u : ms) cout<<u<<" ";
    // for(auto it = ms.begin()  ; it != ms.end() ;it++) cout<<*it<<" ";
    // cout<<endl;
    // int k = ms.count(12);
    // cout<<k<<endl;
    // if(ms.find(11) != ms.end()) cout<<"Value Exists"<<endl;
    // else cout<<"Value doesn't exists"<<endl;

    //check if a set is empty or not.if it's empty it's return 1.because statement is true;
   // ms.clear();

    // cout<<ms.empty()<<endl;

    //ms.erase(12); // If we use this then it removes all the occurence of the value . tc ->log.
    
    ms.erase(ms.find(12)); //If we use this then it removes the first occurence of the value beacuse of using the find which is returns a pointer.
    
    for(auto it = ms.begin() ; it != ms.end() ;it++) cout<<*it<<" ";


}