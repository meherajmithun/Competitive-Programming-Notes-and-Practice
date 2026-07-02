#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 300005;
vector<int>st(N*4, 0), cs(N, 0);

void build(int si, int ss, int se){
    if(ss==se){
        st[si] = cs[ss]; return;
    }
    int mid = (ss+se)>>1;
    build(2*si, ss, mid);
    build(2*si+1, mid+1, se);

    st[si]=(st[2*si]+st[2*si+1]);
}

void update(int si, int ss, int se, int qi, int val){
    if(ss==se){
        st[si] = val; return;
    }
    int mid = (ss+se)>>1;
    if(qi<=mid) update(2*si, ss, mid, qi, val);
    else update(2*si+1, mid+1, se, qi, val);
    st[si] = (st[2*si]+st[2*si+1]);
}

int query(int si, int ss, int se, int qs, int qe){
    if(ss>qe or se<qs) return 0; //completely outside
    if(ss>=qs and se<=qe) return st[si]; //completely inside

    int mid = (ss+se)>>1;
    int l = query(2*si, ss, mid, qs, qe);
    int r = query(2*si+1, mid+1, se, qs, qe);
    return (l+r);
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n,q; cin>>n>>q;
    for(int i=1; i<=n; i++) cin>>cs[i];
    build(1,1,n);
    while(q--){
        int type; cin>>type;
        if(type==1){
            int i,v; cin>>i>>v; i++;
            update(1,1,n,i,v);
        }
        else{
            int l,r; cin>>l>>r; l++;
            cout<<query(1,1,n,l,r)<<'\n';
        }
    }
}