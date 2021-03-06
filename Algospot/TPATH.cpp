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

typedef struct Disjointset{
	vector<int> parent, rank, num;
	Disjointset(int n): parent(n), rank(n,1), num(n,1){
		 for(int i=0;i<n;i++) parent[i]=i;
	}
	int find(int x){
		if(x==parent[x]) return x;
		return parent[x]=find(parent[x]);
	}
	void merge(int a,int b){
		a=find(a); b=find(b);
		if(a==b) return;
		if(rank[a]>rank[b]) swap(a,b);
		parent[a]=b;
		num[b]+=num[a];
		if(rank[a]==rank[b]) ++rank[b];
	}
	bool same(int a,int b){
		return find(a)==find(b);
	}	
	int size(int a){
		return num[find(a)];
	}	
}dj;

int go(int low,vector<pair<int,pair<int,int>>> &v,int n){
	dj DJ(n);
	for(int i=0;i<v.size();i++){
		int dis=v[i].first, a=v[i].second.first, b=v[i].second.second;
		if(dis<low) continue;
		if(DJ.same(a,b)) continue;
		DJ.merge(a,b);
		if(DJ.same(0,n-1)) return dis;
	}
	return 987654321;
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int n,m; scanf("%d %d",&n,&m);
		vector<pair<int,pair<int,int>>> v;
		for(int i=0;i<m;i++){
			int a,b,c; scanf("%d %d %d",&a,&b,&c);
			v.push_back({c,{a,b}});
		}
		sort(v.begin(),v.end());
		int dap=987654321;
		for(int i=0;i<v.size();i++){
			dap=min(dap,go(v[i].first,v,n)-v[i].first);
		}
		printf("%d\n",dap);
	}
	
	return 0;
}

