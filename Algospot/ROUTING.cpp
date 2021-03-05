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

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int n,m; scanf("%d %d",&n,&m);
		vector<pair<int,double>> adj[10000];
		vector<double> dist(10000,1e500);
		dist[0]=1.0;
		
		priority_queue<pair<double,int>> pq;
		pq.push({-1.0,0});
		
		for(int i=0;i<m;i++){
			int a,b; double c; scanf("%d %d %lf",&a,&b,&c);
			adj[a].push_back({b,c});
		}
		while(!pq.empty()){
			double D=-pq.top().first; int V=pq.top().second; pq.pop();
			if(dist[V]<D) continue;
			for(int i=0;i<adj[V].size();i++){
				int next=adj[V][i].first;
				double dis=adj[V][i].second * D;
				if(dist[next]>dis){
					dist[next]=dis;
					pq.push({-dis,next});
				}
			}
		}
		printf("%.10lf\n",dist[n-1]);		
	}
	
	return 0;
}
