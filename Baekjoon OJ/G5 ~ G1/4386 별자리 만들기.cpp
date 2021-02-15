#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string.h>
#include <string>

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
	
}dj;

int main(){
	
	int n; scanf("%d",&n);
	vector<pair<double,double> >v;
	for(int i=0;i<n;i++){
		double a,b; scanf("%lf %lf",&a,&b);
		v.push_back(make_pair(a,b));
	}
	vector<pair<double,pair<int,int> > > list;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			double t=(v[i].first-v[j].first)*(v[i].first-v[j].first)+(v[i].second-v[j].second)*(v[i].second-v[j].second);
			list.push_back(make_pair(sqrt(t),make_pair(i,j)));
		}
	}sort(list.begin(),list.end());
	
	dj d(n);
	double dap=0.0;
	for(int i=0;i<list.size();i++){
		if(!d.same(list[i].second.first,list[i].second.second)){
			dap+=list[i].first; d.merge(list[i].second.first,list[i].second.second);
		}
	}
	
	cout<<dap;
	
	return 0;
}


