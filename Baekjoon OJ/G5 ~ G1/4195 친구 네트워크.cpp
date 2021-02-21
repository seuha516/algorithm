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
#include <map>
#include <unordered_map>

using namespace std;

typedef struct DisjointSet{
	
	vector<int> parent, rank, num;
	
	DisjointSet(int n): parent(n), rank(n,1), num(n,1){
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
	
}DisjointSet;




int main(){
	
	int TC; scanf("%d",&TC);
	
	while(TC--){
		
		unordered_map<string,int> m;
		DisjointSet d(200010);
		
		int n; scanf("%d",&n); getchar();
		
		int idx=0;
		
		for(int i=0;i<n;i++){
			
			char aa[22]={0,}; char bb[22]={0,};
			scanf("%s %s",&aa,&bb);getchar();
			
			string a=aa,b=bb;
			if(m.count(a)==0)m[a]=idx++;
			if(m.count(b)==0)m[b]=idx++;
			
			d.merge(m[a],m[b]);
			printf("%d\n",d.size(m[a]));
		}	
	}

	return 0;
}

