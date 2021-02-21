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

typedef struct DisjointSet{
	
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
	
}DisjointSet;


int main(){
	
	int n,m; scanf("%d %d",&n,&m);
	
	DisjointSet d(n);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int x; scanf("%d",&x);
			if(x)d.merge(i,j);
		}
	}
	
	int ok=1;
	int t; scanf("%d",&t); t--;
	for(int i=1;i<m;i++){
		int tt; scanf("%d",&tt); tt--;
		if(!d.same(t,tt)){
			ok=0;break;
		}
	}
		
	if(ok)printf("YES");
	else printf("NO");

	return 0;
}


