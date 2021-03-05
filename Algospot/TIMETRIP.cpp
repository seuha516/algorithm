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

vector<int> bellman(const vector<pair<int,int>> adj[],int n,int st,int mode){
	vector<int> upper(n,987654321);
	upper[st]=0;
	bool updated;
	for(int i=0;i<n;i++){
		updated=0;
		for(int j=0;j<n;j++){
			if(upper[j]==987654321) continue; //영향 없는 음의 사이클 
			for(int k=0;k<adj[j].size();k++){
				int next=adj[j][k].first;
				int cost=adj[j][k].second*(mode?-1:1);
				if(upper[next]>upper[j]+cost){
					upper[next]=upper[j]+cost; updated=1;
				}
			}
		}
		if(!updated) break;
	}
	if(updated) upper.clear();
	return upper;
} 

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		int n,m; scanf("%d %d",&n,&m);
		vector<pair<int,int>> adj[102];
		for(int i=0;i<m;i++){
			int a,b,c; scanf("%d %d %d",&a,&b,&c);
			adj[a].push_back({b,c});
		}
		
		bool visited[102]={0,};
		bool reach=0;
		queue<int> q; q.push(0);
		while(!q.empty()){
			int now=q.front(); q.pop();
			if(now==1){reach=1; break;}
			for(int i=0;i<adj[now].size();i++){
				int next=adj[now][i].first;
				if(!visited[next]) q.push(next);
			}
		}
		if(!reach){printf("UNREACHABLE\n"); continue;}
		
		vector<int> dap1=bellman(adj,n,0,0);
		vector<int> dap2=bellman(adj,n,0,1);
		
		if(dap1.empty()) printf("INFINITY ");
		else printf("%d ",dap1[1]);
		if(dap2.empty()) printf("INFINITY ");
		else printf("%d ",-dap2[1]);
		printf("\n");
	}
	
	return 0;
}
