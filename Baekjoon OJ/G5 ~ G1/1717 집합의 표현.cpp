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
	
	void merge(int a,int b){
		a=find(a); b=find(b);
		if(rank[a]>rank[b]) swap(a,b);
		parent[a]=b;
		if(rank[a]==rank[b]) ++rank[b];
	}
	
	bool same(int a,int b){
		return find(a)==find(b);
	}
	
};


int main(){
	
	int V, E; scanf("%d %d",&V,&E);
	
	DisjointSet ds(V+1);
	
	for(int i=0;i<E;i++){
		int a,b,c; scanf("%d %d %d",&a,&b,&c);
		if(a==0){
			ds.merge(b,c);
		}else{
			if(ds.same(b,c))printf("YES\n");else printf("NO\n");
		}
	}
	
	return 0;

}

