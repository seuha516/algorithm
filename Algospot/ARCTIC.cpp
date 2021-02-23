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

vector<pair<double, double> > v;
vector<pair<double, pair<int,int> > >list;

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
	
}DJ;


int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		
		v.clear(); list.clear();
		
		int n; scanf("%d",&n);
		for(int i=0;i<n;i++){
			double x,y;
			scanf("%lf %lf",&x,&y);
			v.push_back(make_pair(x,y));
		}
	
		for(int i=1;i<n;i++){
			for(int j=0;j<i;j++){
				double t=(v[i].first-v[j].first)*(v[i].first-v[j].first) + (v[i].second-v[j].second)*(v[i].second-v[j].second);
				list.push_back(make_pair(sqrt(t),make_pair(i,j)));
			}
		}
		sort(list.begin(),list.end());
		
		DJ d(n);
		double dap=0;
		for(int i=0;i<list.size();i++){
			int a=list[i].second.first; int b=list[i].second.second;
			if(d.same(a,b)) continue;
			dap=list[i].first;
			d.merge(a,b);
		}
		printf("%.2lf\n",round(dap*100)/100);
	}
	
	return 0;
}
