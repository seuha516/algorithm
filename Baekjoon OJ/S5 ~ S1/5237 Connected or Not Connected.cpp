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
	
}DJ;

int main(){
	
	int TC; scanf("%d",&TC);
	
	while(TC--){
		
		int a,b; scanf("%d %d",&a,&b);
		DJ dj(a);
		
		for(int i=0;i<b;i++){
			int x,y; scanf("%d %d",&x,&y);
			dj.merge(x,y);
		}
		
		if(dj.size(0)==a){
			printf("Connected.\n");
		}else{
			printf("Not connected.\n");
		}
		
	}

	return 0;

}

