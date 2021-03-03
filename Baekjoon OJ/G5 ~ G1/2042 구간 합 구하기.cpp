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
	seg_tree.clear(); seg_tree.resize(size);
	seg_init(v,0,size/4-1,0);
}
void seg_update(int node,int st,int end,int idx,ll diff){
	if(idx<st||idx>end) return;
	seg_tree[node]=seg_tree[node]+diff;
	if(st!=end){
		seg_update(node*2+1,st,(st+end)/2,idx,diff);
		seg_update(node*2+2,(st+end)/2+1,end,idx,diff);
	}
}
ll seg_find(int node,int node_l,int node_r,int l,int r){
	if(node_l==l&&node_r==r){
		return seg_tree[node];
	}else{
		int mid=(node_l+node_r)/2;
		if(r<=mid) return seg_find(node*2+1,node_l,mid,l,r);
		else if(l>mid) return seg_find(node*2+2,mid+1,node_r,l,r);
		else return seg_find(node*2+1,node_l,mid,l,mid)+seg_find(node*2+2,mid+1,node_r,mid+1,r);
	}
}

int main(){
	
	vector<ll> v;
	int n,m,k; scanf("%d %d %d",&n,&m,&k);
	for(int i=0;i<n;i++){
		ll x; scanf("%lld",&x); v.push_back(x);
	}
	seg_make(v);
	for(int i=0;i<m+k;i++){
		int a; scanf("%d",&a);
		if(a==1){
			int b; ll c;
			scanf("%d %lld",&b,&c);
			seg_update(0,0,n-1,b-1,c-v[b-1]);
			v[b-1]=c;
		}else{
			int b,c; scanf("%d %d",&b,&c);
			cout<<seg_find(0,0,n-1,b-1,c-1)<<endl;
		}
	}
	
	
	return 0;
}

