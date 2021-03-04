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

vector<pair<int,int>> seg_tree;
pair<int,int> seg_init(const vector<int> &v,int l,int r,int node){
	if(l==r) return seg_tree[node]=make_pair((v[l]&1?1:0),(v[l]&1?0:1));
	int m=(l+r)/2;
	pair<int,int> L=seg_init(v,l,m,node*2+1);
	pair<int,int> R=seg_init(v,m+1,r,node*2+2); 
	pair<int,int> ret=make_pair(L.first+R.first,L.second+R.second);
	return seg_tree[node]=ret;
}
void seg_make(const vector<int> &v){
	int size=v.size(); size*=4;
	seg_tree.clear(); seg_tree.resize(size);
	seg_init(v,0,size/4-1,0);
}
pair<int,int> seg_update(int node,int st,int end,int idx,int diff){
	if(idx<st||idx>end) return seg_tree[node];
	if(st==end){
		seg_tree[node]=make_pair((diff&1?1:0),(diff&1?0:1));
		return seg_tree[node];
	}
	pair<int,int> t1=seg_update(node*2+1,st,(st+end)/2,idx,diff);
	pair<int,int> t2=seg_update(node*2+2,(st+end)/2+1,end,idx,diff);
	return seg_tree[node]=make_pair(t1.first+t2.first,t1.second+t2.second);
}
pair<int,int> seg_find(int node,int node_l,int node_r,int l,int r){
	if(node_l==l&&node_r==r){
		return seg_tree[node];
	}else{
		int mid=(node_l+node_r)/2;
		if(r<=mid) return seg_find(node*2+1,node_l,mid,l,r);
		else if(l>mid) return seg_find(node*2+2,mid+1,node_r,l,r);
		else{
			pair<int,int> t1=seg_find(node*2+1,node_l,mid,l,mid);
			pair<int,int> t2=seg_find(node*2+2,mid+1,node_r,mid+1,r);
			return make_pair(t1.first+t2.first,t1.second+t2.second);
		}
	}
}

int main(){
	
	int n; vector<int> v; scanf("%d",&n);
	for(int i=0;i<n;i++){
		int x; scanf("%d",&x); v.push_back(x);
	}
	seg_make(v);
	int m; scanf("%d",&m);
	for(int i=0;i<m;i++){
		int a,b,c; scanf("%d %d %d",&a,&b,&c);
		if(a==1){
			seg_update(0,0,n-1,b-1,c);
		}else if(a==2){
			printf("%d\n",seg_find(0,0,n-1,b-1,c-1).second);
		}else{
			printf("%d\n",seg_find(0,0,n-1,b-1,c-1).first);
		}
	}
	
	return 0;
}

