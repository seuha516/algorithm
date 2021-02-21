#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <queue>
#include <utility>
#include <cstdlib>
#include <set>
#include <functional>
#include <stack>

using namespace std;

int time_to_build[1002];
vector <int> order[1001];
int DP[1002];

int go(int goal){
	int dap=0;
	
	for(int i=0;i<order[goal].size();i++){
		int x;
		if(DP[order[goal][i]]==-1){
			x=go(order[goal][i]);
			DP[order[goal][i]]=x;
		}else{
			x=DP[order[goal][i]];
		}
		dap=max(dap,x);
	}
	
	return dap+time_to_build[goal];
}

int main(){
	
	int t;scanf("%d",&t);
	
	while(t--){
		int n,k; scanf("%d %d",&n,&k);

		for(int i=1;i<=n;i++){
			int time; scanf("%d",time_to_build+i); //건설하는데 걸리는 시간
			while(!order[i].empty()) order[i].pop_back();
			DP[i]=-1;
		}
		while(k--){
			int x,y; scanf("%d %d",&x,&y); //x를 지어야 y를 지을 수 있다 
			order[y].push_back(x);
		}
		int goal; scanf("%d",&goal);
		
		printf("%d\n",go(goal));
		
	}
	
	return 0;
}


