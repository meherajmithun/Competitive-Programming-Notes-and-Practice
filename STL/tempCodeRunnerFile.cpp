    set<pair<int,int>,greater<pair<int,int>>>st;

    st.insert({1,23});
    st.insert({12,43});
    st.insert({21,13});
    st.insert({11,3});
    st.insert({11,2});
    for(auto u : st) cout<<u.first<<" "<<u.second<<endl;