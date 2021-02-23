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

void DFS(int x){
	visit[x]=true;
	printf("%d ",x);
	for(int i=0;i<adj[x].size();i++){
		if(!visit[adj[x][i]]){
			DFS(adj[x][i]);
		}
	}
}

void BFS(int x){
	q.push(x);
	visit[x]=true;
	while(!q.empty()){
		int t=q.front();
		q.pop();
		printf("%d ",t);
		for(int i=0;i<adj[t].size();i++){
			if(!visit[adj[t][i]]){
				q.push(adj[t][i]);
				visit[adj[t][i]]=true;
			}
		}
		
	}
	
}

int main() {
	scanf("%d %d %d",&n,&m,&v);
	for(int i=0;i<m;i++){
		scanf("%d %d",&t1,&t2);
		adj[t1].push_back(t2);
		adj[t2].push_back(t1);
	}
	
	for(int i=1;i<=n;i++){
		sort(adj[i].begin(),adj[i].end());
	}

	DFS(v);
	printf("\n");
	memset(visit,0,1001);
	BFS(v);

	
	return 0;	
}
