#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <set>
#include <cstdlib>
#include <cmath>
#include <deque>
#include <set>
#include <stack>
#include <queue>

using namespace std;

struct DisjointSet{
	
	vector<int> parent, rank;
	
	DisjointSet(int n): parent(n), rank(n,1){
		 for(int i=0;i<n;i++) parent[i]=i;
	}
	
	int find(int x){
		if(x==parent[x]) return x;
		return parent[x]=find(parent[x]);
	}
	
	bool merge(int a,int b){
		a=find(a); b=find(b);
		if(a==b) return 1;
		if(rank[a]>rank[b]) swap(a,b);
		parent[a]=b;
		if(rank[a]==rank[b]) ++rank[b];
		return 0;
	}
	
};

int main(){
	
	int V, E; scanf("%d %d",&V,&E);
	
	DisjointSet ds(V+500);
	
	vector<pair<int,pair<int,int> > > v;
	
	for(int i=0;i<E;i++){
		int a,b,c; scanf("%d %d %d",&a,&b,&c);
		v.push_back(make_pair(c,make_pair(a,b)));
	}
	sort(v.begin(),v.end());
	
	int dap=0;
	
	for(int i=0;i<E;i++){
		int A=v[i].second.first; int B=v[i].second.second;
		if(ds.merge(A,B))continue;
		dap+=v[i].first;
	}
	
	printf("%d",dap);

	return 0;
}

