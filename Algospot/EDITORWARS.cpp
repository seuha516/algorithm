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
	vector<int> parent, rank, size, enemy;
	Disjointset(int n): parent(n), rank(n,1), size(n,1), enemy(n,-1){
		 for(int i=0;i<n;i++) parent[i]=i;
	}
	int find(int x){
		if(x==parent[x]) return x;
		return parent[x]=find(parent[x]);
	}
	int merge(int a,int b){
		if(a==-1||b==-1) return max(a,b);
		a=find(a); b=find(b);
		if(a==b) return b;
		if(rank[a]>rank[b]) swap(a,b);
		parent[a]=b;
		size[b]+=size[a];
		if(rank[a]==rank[b]) ++rank[b];
		return b;
	}
	bool ack(int a,int b){
		a=find(a); b=find(b);
		if(enemy[a]==b) return false;
		int t1=merge(a,b);
		int t2=merge(enemy[a],enemy[b]);
		enemy[t1]=t2;
		if(t2!=-1) enemy[t2]=t1;
		return true;
	}
	bool dis(int a,int b){
		a=find(a); b=find(b);
		if(a==b) return false;
		int t1=merge(a,enemy[b]);
		int t2=merge(b,enemy[a]);
		enemy[t1]=t2;
		enemy[t2]=t1;
		return true;
	}
}dj;

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int n,m; scanf("%d %d",&n,&m);
		bool end=0; int dap=0;
		dj DJ(n);
		for(int i=0;i<m;i++){
			char c[4]={0,}; int a,b; scanf("%s %d %d",c,&a,&b); getchar();
			if(end) continue;
			if(c[0]=='A'){
				if(!DJ.ack(a,b)){
					printf("CONTRADICTION AT %d\n",i+1); end=1;
				}
			}else{
				if(!DJ.dis(a,b)){
					printf("CONTRADICTION AT %d\n",i+1); end=1;
				}
			}
		}
		if(!end){
			for(int i=0;i<n;i++){
				if(i==DJ.find(i)){
					int y=DJ.enemy[i];
					if(y>i) continue;
					int s1=DJ.size[i];
					int s2=(y==-1? 0:DJ.size[y]);
					dap+=max(s1,s2);
				}
			}
			printf("MAX PARTY SIZE IS %d\n",dap);
		} 
	}
	
	return 0;
}


