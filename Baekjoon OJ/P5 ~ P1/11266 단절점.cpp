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

vector<vector<int>> adj;
vector<int> discovered; //-1로 초기화 
vector<bool> cut_v;
int dis_cnt;
int find_cut_v(int now,bool root){
	discovered[now]=dis_cnt++;
	int ret=discovered[now];
	int children=0;
	for(int i=0;i<adj[now].size();i++){
		int next=adj[now][i];
		if(discovered[next]==-1){
			children++;
			int subtree=find_cut_v(next,0);
			if(!root&&subtree>=discovered[now]) cut_v[now]=1;
			ret=min(ret,subtree);
		}else{
			ret=min(ret,discovered[next]);
		}
	}
	if(root) cut_v[now]=(children>=2);
	return ret;
}

int main(){
	
	int v,e; scanf("%d %d",&v,&e); 
	adj.resize(v+10); cut_v.resize(v+10);
	for(int i=0;i<v+10;i++) discovered.push_back(-1); 
	
	for(int i=0;i<e;i++){
		int a,b; scanf("%d %d",&a,&b);
		adj[a].push_back(b); adj[b].push_back(a);
	}
	for(int i=1;i<=v;i++){
		if(discovered[i]==-1) find_cut_v(i,1);
	}
	int dap=0;
	for(int i=1;i<=v;i++){
		if(cut_v[i]) dap++;
	}
	printf("%d\n",dap);
	for(int i=1;i<=v;i++){
		if(cut_v[i]) printf("%d ",i);
	}
	
	return 0;
}


