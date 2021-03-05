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
		int v,e,n,m; scanf("%d %d %d %d",&v,&e,&n,&m);
		vector<pair<int,int>> adj[1050];
		vector<int> dist(1050,987654321);
		dist[0]=0;
		
		priority_queue<pair<int,int>> pq;
		pq.push({0,0});
		
		for(int i=0;i<e;i++){
			int a,b,c; scanf("%d %d %d",&a,&b,&c);
			adj[a].push_back({b,c}); adj[b].push_back({a,c});
		}
		vector<int> fireplace, firestation;
		for(int i=0;i<n;i++){
			int x; scanf("%d",&x); fireplace.push_back(x);
		}
		for(int i=0;i<m;i++){
			int x; scanf("%d",&x); firestation.push_back(x);
			adj[0].push_back({x,0});
		}
		
		while(!pq.empty()){
			int D=-pq.top().first; int V=pq.top().second; pq.pop();
			if(dist[V]<D) continue;
			for(int i=0;i<adj[V].size();i++){
				int next=adj[V][i].first;
				int dis=adj[V][i].second + D;
				if(dist[next]>dis){
					dist[next]=dis;
					pq.push({-dis,next});
				}
			}
		}
		int dap=0;
		for(int i=0;i<fireplace.size();i++){
			dap+=dist[fireplace[i]];
		}
		printf("%d\n",dap);		
	}
	
	return 0;
}
