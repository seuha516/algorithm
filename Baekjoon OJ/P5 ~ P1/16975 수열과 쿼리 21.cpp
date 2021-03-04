#include <iostream>
#include <string.h>
#include <math.h>
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
	ll ret=L+R;
	return seg_tree[node]=ret;
}
void seg_make(const vector<ll> &v){
	int size=v.size(); size*=4;
	seg_tree.clear(); seg_tree=vector<ll>(size,0);
	seg_lazy.clear(); seg_lazy=vector<ll>(size,0);
	seg_init(v,0,size/4-1,0);
}
ll seg_update(int node,int st,int end,int l,int r,ll diff){
	if(seg_lazy[node]!=0){
		if(st!=end){
			seg_lazy[node*2+1]+=seg_lazy[node];
			seg_lazy[node*2+2]+=seg_lazy[node];
		}
		seg_tree[node]+=seg_lazy[node]*(end-st+1);
		seg_lazy[node]=0;
	}
	if(r<st||l>end) return seg_tree[node];
	else if(l<=st&&end<=r){
		seg_tree[node]+=(end-st+1)*diff;
		if(st!=end){
			seg_lazy[node*2+1]+=diff;
			seg_lazy[node*2+2]+=diff;
		}
		return seg_tree[node];
	}else{
		int mid=(st+end)/2;
		seg_tree[node]=seg_update(node*2+1,st,mid,l,r,diff)+seg_update(node*2+2,mid+1,end,l,r,diff);
		return seg_tree[node];
	}
}
ll seg_find(int node,int node_l,int node_r,int l,int r){
	if(seg_lazy[node]!=0){
		if(node_l!=node_r){
			seg_lazy[node*2+1]+=seg_lazy[node];
			seg_lazy[node*2+2]+=seg_lazy[node];
		}
		seg_tree[node]+=seg_lazy[node]*(node_r-node_l+1);
		seg_lazy[node]=0;
	}
	if(r<node_l||l>node_r) return 0;
	else if(l<=node_l&&node_r<=r){
		return seg_tree[node];
	}else{
		int mid=(node_l+node_r)/2;
		return seg_find(node*2+1,node_l,mid,l,r)+seg_find(node*2+2,mid+1,node_r,l,r);
	}
}


int main(){
	
	int n; scanf("%d",&n);
	vector<ll> v;
	for(int i=0;i<n;i++){
		ll x; scanf("%lld",&x); v.push_back(x);
	}
	seg_make(v);
	
	int m; scanf("%d",&m);
	for(int i=0;i<m;i++){
		int a,b,c; long long d; scanf("%d",&a);
		if(a==1){
			scanf("%d %d %lld",&b,&c,&d);
			seg_update(0,0,n-1,b-1,c-1,d);
		}else if(a==2){
			scanf("%d",&b);
			printf("%lld\n",seg_find(0,0,n-1,b-1,b-1));	
		}	
	}
	
	return 0;
}

