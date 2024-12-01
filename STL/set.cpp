// property of set : 
// 1/Unique
// 2/sort
//set is initially 0-based index

#include<bits/stdc++.h>
using namespace std;

 int main(){


    // set<int>s;
    
    //  s.insert(11);
    //  s.insert(12);
    //  s.insert(11);
    //  s.insert(12);
    //  s.insert(212);
    // for(auto u : s) cout<<u<<" ";
    // cout<<endl;

    
    // set<int,greater<int>>s;
    
    //  s.insert(1);
    //  s.insert(12);
    //  s.insert(11);
    //  s.insert(21);
    //  s.insert(212);
    // for(auto u : s) cout<<u<<" ";
    // cout<<endl;

    //Print using itertor
    // for(auto it = s.begin() ; it != s.end(); it++) cout<<*it<<" ";
    // cout<<endl;
    // for(auto u : st){
    //     cout<<u<<" ";
    // }
    // cout<<endl;
    // //print element by built-in
    
    // cout<<*s.begin()<<endl;
    // cout<<*(++s.begin())<<endl;
    // cout<<*s.rbegin()<<endl;
    // cout<<*(--s.end())<<endl;

    // //search the value of n'th index . Example n  = 2;
    // int indx = 0;
    // for(auto u : s){
    //     if(indx == 2){
    //         cout<<u<<endl;
    //         break;
    //     }
    //     indx++;
    // }

//If a value have in the set then the count is return else it's return 0

  //  cout<<s.count(11)<<endl;

    //If I use find and the value doesn't exist in  the set then it returns the end index,if it's exist in the array then it return the value;
    
    // cout<<*s.find(2)<<endl;

    // if(s.find(12) == s.end()){
    //     cout<<"No"<<endl;
    // }
    // else cout<<"Yes"<<endl;

    //SET OF PAIR;
    
    // set<pair<int,int>>st;
    // st.insert({1,23});
    // st.insert({12,43});
    // st.insert({21,13});
    // st.insert({11,3});
    // st.insert({11,2});
    // for(auto u : st) cout<<u.first<<" "<<u.second<<endl;

    //REVERSE ORDER SET
    set<pair<int,int>,greater<pair<int,int>>>st;

    st.insert({1,23});
    st.insert({12,43});
    st.insert({21,13});
    st.insert({11,3});
    st.insert({11,2});
    for(auto u : st) cout<<u.first<<" "<<u.second<<endl;


    }