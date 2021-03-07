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
vector<int> seg_lazy;
int seg_init(const vector<int> &v,int l,int r,int node){
	if(l==r) return seg_tree[node]=v[l];
	int m=(l+r)/2;
	int L=seg_init(v,l,m,node*2+1);
	int R=seg_init(v,m+1,r,node*2+2); 
	int ret=-999;
	return seg_tree[node]=ret;
}
void seg_make(const vector<int> &v){
	int size=v.size(); size*=4;
	seg_tree.clear(); seg_tree=vector<int>(size,0);
	seg_lazy.clear(); seg_lazy=vector<int>(size,0);
	seg_init(v,0,size/4-1,0);
}
void seg_update(int node,int st,int end,int l,int r,int C){
	if(r<st||l>end) return;
	if(l<=st&&end<=r){
		seg_lazy[node]^=C;
	}else{
		int mid=(st+end)/2;
		seg_update(node*2+1,st,mid,l,r,C);
		seg_update(node*2+2,mid+1,end,l,r,C);
	}
}
int seg_find(int node,int st,int end,int idx){
	if(seg_lazy[node]!=0){
		if(st!=end){
			seg_lazy[node*2+1]^=seg_lazy[node];
			seg_lazy[node*2+2]^=seg_lazy[node];
		}
		seg_tree[node]^=seg_lazy[node];
		seg_lazy[node]=0;
	}
	if(st==end){
		return seg_tree[node];
	}else{
		int mid=(st+end)/2;
		if(idx<=mid) return seg_find(node*2+1,st,mid,idx);
		else return seg_find(node*2+2,mid+1,end,idx);
	}
}

int main(){
	
	int n; scanf("%d",&n);
	vector<int> v;
	for(int i=0;i<n;i++){int x; scanf("%d",&x); v.push_back(x);}
	seg_make(v);
	
	int m; scanf("%d",&m);
	for(int i=0;i<m;i++){
		int x; scanf("%d",&x);
		if(x==1){
			int a,b,c; scanf("%d %d %d",&a,&b,&c);
			seg_update(0,0,n-1,a,b,c);
		}else{
			int a; scanf("%d",&a); printf("%d\n",seg_find(0,0,n-1,a));
		}
	}
	
	return 0;
}

