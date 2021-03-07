#include <stdlib.h>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <complex>
#include <deque>
#include <set>
#include <stack>
#include <queue>
#include <utility>
#include <set>
#include <cstdlib>
#include <map>
#include <unordered_map>
#define ll long long
#define ull unsigned long long

using namespace std;

vector<ll> seg_tree;
vector<ll> seg_lazy;
ll seg_init(const vector<ll> &v,int l,int r,int node){
	if(l==r) return seg_tree[node]=v[l];
	int m=(l+r)/2;
	ll L=seg_init(v,l,m,node*2+1);
	ll R=seg_init(v,m+1,r,node*2+2); 
	ll ret=L^R;
	return seg_tree[node]=ret;
}
void seg_make(const vector<ll> &v){
	int size=v.size(); size*=4;
	seg_tree.clear(); seg_tree=vector<ll>(size,0);
	seg_lazy.clear(); seg_lazy=vector<ll>(size,0);
	seg_init(v,0,size/4-1,0);
}
void update_lazy(int node,int st,int end){
	if(seg_lazy[node]!=0){
		if(st!=end){
			seg_lazy[node*2+1]^=seg_lazy[node];
			seg_lazy[node*2+2]^=seg_lazy[node];
		}
		if((end-st+1)&1) seg_tree[node]^=seg_lazy[node];
		seg_lazy[node]=0;
	}
}
ll seg_update(int node,int st,int end,int l,int r,ll C){
	update_lazy(node,st,end);
	if(r<st||l>end) return seg_tree[node];
	if(l<=st&&end<=r){
		if((end-st+1)&1) seg_tree[node]^=C;
		if(st!=end){
			seg_lazy[node*2+1]^=C;
			seg_lazy[node*2+2]^=C;
		}
		return seg_tree[node];
	}else{
		int mid=(st+end)/2;
		ll L=seg_update(node*2+1,st,mid,l,r,C);
		ll R=seg_update(node*2+2,mid+1,end,l,r,C);
		seg_tree[node]=L^R;
		return seg_tree[node];
	}
}
ll seg_find(int node,int st,int end,int l,int r){
	update_lazy(node,st,end);
	if(r<st||l>end) return 0;
	if(l<=st&&end<=r){
		return seg_tree[node];
	}else{
		int mid=(st+end)/2;
		ll L=seg_find(node*2+1,st,mid,l,r);
		ll R=seg_find(node*2+2,mid+1,end,l,r);
		return L^R;
	}
}

int main(){
	
	int n; scanf("%d",&n);
	vector<ll> v;
	for(int i=0;i<n;i++){ll x; scanf("%lld",&x); v.push_back(x);}
	seg_make(v);
	
	int m; scanf("%d",&m);
	for(int i=0;i<m;i++){
		int x; scanf("%d",&x);
		if(x==1){
			int a,b; ll c; scanf("%d %d %lld",&a,&b,&c);
			if(a>b) swap(a,b);
			seg_update(0,0,n-1,a,b,c);
		}else{
			int a,b; scanf("%d %d",&a,&b); 
			if(a>b) swap(a,b);
			printf("%d\n",seg_find(0,0,n-1,a,b));
		}
	}
	
	return 0;
}

