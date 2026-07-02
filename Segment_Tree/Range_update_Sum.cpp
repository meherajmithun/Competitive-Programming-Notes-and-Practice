#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 100005;
vector<int>st(N*4, 0), lazy(N*4, 0),cs(N, 0);

void build(int si, int ss, int se){
    if(ss==se){
        st[si]=cs[ss]; return;
    }
    int mid = (ss+se)>>1;
    build(2*si, ss, mid);
    build(2*si+1, mid+1, se);

    st[si] = (st[2*si]+st[2*si+1]);
}

int query(int si, int ss, int se, int qs, int qe){
    if(lazy[si]!=0){
        int dx = lazy[si];
        lazy[si]=0;
        st[si]+=dx*(se-ss+1);
        if(ss!=se) lazy[2*si]+=dx, lazy[2*si+1]+=dx;
    }
    if(ss>qe or se<qs) return 0;
    if(ss>=qs and se<=qe) return st[si];

    int mid = (ss+se)>>1;
    int l = query(2*si, ss, mid, qs, qe);
    int r = query(2*si+1, mid+1, se, qs, qe);

    return (l+r);
}

void update(int si, int ss, int se, int qs, int qe, int val){
    if(lazy[si] != 0){
        int dx = lazy[si];
        lazy[si]=0;
        st[si]+=dx*(se-ss+1);
        if(ss!=se) lazy[2*si]+=dx, lazy[2*si+1]+=dx;
    }
    if(ss>qe or se<qs) return ;
    if(ss>=qs and se<=qe){
        int dx = (se-ss+1)*val;
        st[si] += dx;
        if(ss!=se) lazy[2*si] += val, lazy[2*si+1]+=val;
        return;
    }
    int mid = (ss+se)>>1;
    update(2*si, ss, mid, qs, qe,  val);
    update(2*si+1, mid+1, se, qs, qe,  val);
    st[si] = (st[2*si]+st[2*si+1]);
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n,q; cin>>n>>q;
    // for(int i=1; i<=n; i++) cin>>cs[i];
    build(1,1,n);
    while(q--){
        int type; cin>>type;
        if(type==1){
            int a,b,val; cin>>a>>b>>val; a++;
            update(1,1,n,a,b,val);
        }
        else{
            int a,b; cin>>a>>b; a++;
            cout<<query(1,1,n,a,b)<<'\n';
        }
    }
}
