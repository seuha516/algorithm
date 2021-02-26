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

pair<int,int> hap(pair<int,int> a,pair<int,int> b){
	int r1=min(a.first,b.first);
	int r2=max(a.second,b.second);
	return {r1,r2};
}
vector<pair<int,int>> seg_tree;
pair<int,int> seg_init(const vector<int> &v,int l,int r,int node){
	if(l==r) return seg_tree[node]={v[l],v[l]};
	int m=(l+r)/2;
	pair<int,int> l_pair=seg_init(v,l,m,node*2+1);
	pair<int,int> r_pair=seg_init(v,m+1,r,node*2+2); 
	pair<int,int> ret=hap(l_pair,r_pair);
	return seg_tree[node]=ret;
}
void seg_make(const vector<int> &v){
	int size=v.size(); size*=4;
	seg_tree.clear(); seg_tree.resize(size);
	seg_init(v,0,size/4-1,0);
}
pair<int,int> seg_find(int node,int node_l,int node_r,int l,int r){
	if(node_l==l&&node_r==r){
		return seg_tree[node];
	}else{
		int mid=(node_l+node_r)/2;
		if(r<=mid) return seg_find(node*2+1,node_l,mid,l,r);
		else if(l>mid) return seg_find(node*2+2,mid+1,node_r,l,r);
		else return hap(seg_find(node*2+1,node_l,mid,l,mid),seg_find(node*2+2,mid+1,node_r,mid+1,r));
	}
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int n,q; scanf("%d %d",&n,&q);
		vector<int> h;
		for(int i=0;i<n;i++){int x; scanf("%d",&x); h.push_back(x);}
		seg_make(h);
		for(int i=0;i<q;i++){
			int a,b; scanf("%d %d",&a,&b);
			pair<int,int> dap=seg_find(0,0,n-1,a,b);
			printf("%d\n",dap.second-dap.first);
		}
	}
	
	return 0;
}


