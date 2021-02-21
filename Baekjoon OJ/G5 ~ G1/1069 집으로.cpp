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

#define TEST 1
#define SOSU_LIMIT 1000000

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
	
	double x,y,d,t; scanf("%lf %lf %lf %lf",&x,&y,&d,&t);
	
	if(d<=t) printf("%.20lf",(sqrt(x*x+y*y)));
	else{
		
		double dis=(sqrt(x*x+y*y));		
		double jump=d; double time=t;
		double n=floor(dis/jump); double mod=dis-n*jump;
		
		if(mod < 0.000000000000000001){
			printf("%.20lf",n*time);
		}else if(n<0.1){
			printf("%.20lf",min(mod,min(2.0*time,time+abs(mod-jump))));
		}else{
			printf("%.20lf",min((n+1.0)*time,(n*time)+mod));
		}
	}
	
	return 0;
}

