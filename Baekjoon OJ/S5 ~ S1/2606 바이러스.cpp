#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstdio>
#include <cstring>

using namespace std;

int n,m,v;
bool visit[1001];
vector<int> adj[1001];
int t1,t2;
queue<int> q;
int y=0;
void DFS(int x){
	visit[x]=true;
	y++;
	for(int i=0;i<adj[x].size();i++){
		if(!visit[adj[x][i]]){
			DFS(adj[x][i]);
		}
	}
}
int main() {
	scanf("%d %d",&n,&m);
	v=1;
	for(int i=0;i<m;i++){
		scanf("%d %d",&t1,&t2);
		adj[t1].push_back(t2);
		adj[t2].push_back(t1);
	}
	
	for(int i=1;i<=n;i++){
		sort(adj[i].begin(),adj[i].end());
	}

	DFS(v);
	printf("%d",y-1);
	
	return 0;
	
}
