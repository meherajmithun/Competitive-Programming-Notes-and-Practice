#include<bits/stdc++.h>
using namespace std;
const int N = 300005;
#define int long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
vector<int>st(N*4+5, 0),cs(N+5,0);
 
void build(int si, int ss, int se){
	if(ss==se) {
		st[si]=cs[ss]; return;
	}
	int mid = (ss+se)>>1;
	build(2*si, ss, mid);
	build(2*si+1, mid+1, se);
	st[si]=(st[2*si]+st[2*si+1]);
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
	fast
	int n; cin>>n;
	int q; cin>>q;
	for(int i=1; i<=n; i++) cin>>cs[i];
	build(1,1,n);
 
	while(q--){
		int l,r; cin>>l>>r;
		cout<<query(1,1,n,l,r)<<'\n';
	}
}