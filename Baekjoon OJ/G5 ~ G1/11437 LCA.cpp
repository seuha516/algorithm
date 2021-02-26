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

vector<int> route;
vector<int> seg_tree;
vector<vector<int>> child;
int location[100050];
int depth[100050];

void travel(const vector<vector<int>> &child,int x,int parent){
	location[x]=route.size();
	route.push_back(x);
	for(int i=0;i<child[x].size();i++){
		if(child[x][i]==parent) continue;
		depth[child[x][i]]=depth[x]+1;
		travel(child,child[x][i],x);
		route.push_back(x);
	}
}

int seg_init(const vector<int> &v,int l,int r,int node){
	if(l==r) return seg_tree[node]=v[l];
	int m=(l+r)/2;
	int left=seg_init(v,l,m,node*2+1);
	int right=seg_init(v,m+1,r,node*2+2);
	if(depth[left]<depth[right]) return seg_tree[node]=left;
	else return seg_tree[node]=right;
}
void seg_make(const vector<int> &v){
	int size=v.size(); size*=4;
	seg_tree.clear(); seg_tree.resize(size);
	seg_init(v,0,size/4-1,0);
}
int seg_find(int node,int node_l,int node_r,int l,int r){
	if(node_l==l&&node_r==r){
		return seg_tree[node];
	}else{
		int node_m=(node_l+node_r)/2;
		if(r<=node_m){
			return seg_find(node*2+1,node_l,node_m,l,r);
		}else if(l>node_m){
			return seg_find(node*2+2,node_m+1,node_r,l,r);
		}else{
			int temp1=seg_find(node*2+1,node_l,node_m,l,node_m);
			int temp2=seg_find(node*2+2,node_m+1,node_r,node_m+1,r);
			if(depth[temp1]<depth[temp2]) return temp1;
			else return temp2;
		}
	}
}

int main(){

	memset(location,-1,sizeof(location)); memset(depth,-1,sizeof(depth)); 
	depth[1]=0; location[1]=0;
		
	int n; scanf("%d",&n);
	child.resize(n+50);
	for(int i=1;i<n;i++){
		int a,b; scanf("%d %d",&a,&b); child[a].push_back(b); child[b].push_back(a);
	}
	travel(child,1,-1);
	seg_make(route);
	
	int q; scanf("%d",&q);
	for(int i=0;i<q;i++){
		int a,b; scanf("%d %d",&a,&b);
		int loc_a=location[a],loc_b=location[b];
		if(loc_a>loc_b) swap(loc_a,loc_b);
		int lca_num=seg_find(0,0,route.size()-1,loc_a,loc_b);
		printf("%d\n",lca_num);
	}
	
	return 0;
}


