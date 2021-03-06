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

double frim(const vector<pair<int,double>> adj[],int n){
	vector<bool> visited(n,0);
	vector<double> minweight(n,1e200);
	double ret=0.0;
	minweight[0]=0.0;
	for(int i=0;i<n;i++){
		int next=-1;
		for(int j=0;j<n;j++){
			if(!visited[j] && (next==-1 || minweight[next]>minweight[j])){
				next=j;
			}
		}
		ret+=minweight[next];
		visited[next]=1;
		for(int i=0;i<adj[next].size();i++){
			int v=adj[next][i].first;
			double dis=adj[next][i].second;
			if(!visited[v] && minweight[v]>dis) minweight[v]=dis;
		}
	} 
	return ret;
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int n,m; scanf("%d %d",&n,&m);
		vector<pair<int,double>> adj[500];
		vector<int> dx,dy;
		for(int i=0;i<n;i++){
			int x; scanf("%d",&x); dx.push_back(x);
		}
		for(int i=0;i<n;i++){
			int x; scanf("%d",&x); dy.push_back(x);
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				adj[i].push_back({j,sqrt((dx[i]-dx[j])*(dx[i]-dx[j])+(dy[i]-dy[j])*(dy[i]-dy[j]))});
			}
		}
		for(int i=0;i<m;i++){
			int a,b; scanf("%d %d",&a,&b);
			adj[a].push_back({b,0}); adj[b].push_back({a,0});
		}
		printf("%.10lf\n",frim(adj,n));
	}
	
	return 0;
}

