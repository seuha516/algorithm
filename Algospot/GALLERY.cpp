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

int v,e; 
vector<vector<int>> adj;
bool visited[1000];
int dap;

int dfs(int now){
	visited[now]=1;
	int children[3]={0,0,0};
	for(int i=0;i<adj[now].size();i++){
		int next=adj[now][i];
		if(!visited[next]) children[dfs(next)]++;
	}
	if(children[0]){
		dap++; return 2;
	}
	if(children[2]){
		return 1;
	}
	return 0;
}

int main(){
	
	int TC; scanf("%d",&TC);
	while(TC--){
		memset(visited,0,sizeof(visited));
		adj.clear();
		dap=0;
		scanf("%d %d",&v,&e);
		adj.resize(v);
		for(int i=0;i<e;i++){
			int a,b; scanf("%d %d",&a,&b);
			adj[a].push_back(b); adj[b].push_back(a);
		}
		
		for(int i=0;i<v;i++){
			if(!visited[i]&&dfs(i)==0) dap++;
		}
		
		printf("%d\n",dap);
		
	}
	
	return 0;
}


