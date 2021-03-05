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
		int m; scanf("%d",&m);
		vector<pair<int,int>> adj[1000];
		vector<int> dist(1000,987654321);
		dist[999]=0;
		
		priority_queue<pair<int,int>> pq;
		pq.push({0,999});
		
		for(int i=0;i<m;i++){
			int a,b; scanf("%d %d",&a,&b);
			for(int j=0;j<500;j++){
				int next=j+a-b; 
				if(next<0||next>=500) continue;
				adj[j].push_back({next,a});
			}
			adj[999].push_back({250+a-b,a});
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
		if(dist[250]>987654320) printf("IMPOSSIBLE\n");
		else printf("%d\n",dist[250]);
	}
	
	return 0;
}
