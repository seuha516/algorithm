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

vector<int> seg_tree;
int seg_init(const vector<int> &v,int l,int r,int node){
	if(l==r) return seg_tree[node]=v[l];
	int m=(l+r)/2;
	int L=seg_init(v,l,m,node*2+1);
	int R=seg_init(v,m+1,r,node*2+2); 
	int ret=min(L,R);
	return seg_tree[node]=ret;
}
void seg_make(const vector<int> &v){
	int size=v.size(); size*=4;
	seg_tree.clear(); seg_tree.resize(size);
	seg_init(v,0,size/4-1,0);
}
int seg_update(int node,int st,int end,int idx,int diff){
	if(idx<st||idx>end) return seg_tree[node];
	if(st==end) return seg_tree[node]=diff;
	return seg_tree[node]=min(seg_update(node*2+1,st,(st+end)/2,idx,diff),seg_update(node*2+2,(st+end)/2+1,end,idx,diff));
}
int seg_find(int node,int node_l,int node_r,int l,int r){
	if(node_l==l&&node_r==r){
		return seg_tree[node];
	}else{
		int mid=(node_l+node_r)/2;
		if(r<=mid) return seg_find(node*2+1,node_l,mid,l,r);
		else if(l>mid) return seg_find(node*2+2,mid+1,node_r,l,r);
		else return min(seg_find(node*2+1,node_l,mid,l,mid),seg_find(node*2+2,mid+1,node_r,mid+1,r));
	}
}


int main(){
	
	vector<int> v;
	int n; scanf("%d",&n);
	for(int i=0;i<n;i++){
		int x; scanf("%d",&x); v.push_back(x);
	}
	seg_make(v);
	int m; scanf("%d",&m);
	for(int i=0;i<m;i++){
		int x; scanf("%d",&x);
		if(x==1){
			int a,b; scanf("%d %d",&a,&b);
			v[a-1]=b;
			seg_update(0,0,n-1,a-1,b);
		}else{
			int a,b; scanf("%d %d",&a,&b);
			printf("%d\n",seg_find(0,0,n-1,a-1,b-1));
		}
	}
	
	return 0;
}

