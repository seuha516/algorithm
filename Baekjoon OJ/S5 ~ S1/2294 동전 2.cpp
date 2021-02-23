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
#include <hash_map>

using namespace std;

bool visit[100002];
int dis[100002];

int main(){
	
	for(int i=1;i<=100002;i++) dis[i]=-1;
	
	int n,k; scanf("%d %d",&n,&k);
	
	queue<int> q;
	vector <int> v;
	while(n--){
		int x;scanf("%d",&x);
		q.push(x); v.push_back(x); visit[x]=1; dis[x]=1;
	}
	
	while(1){
		int aa=q.front(); q.pop();
		
		for(int i=0;i<v.size();i++){
			int aaa=aa+v[i];
			if(aaa<=k){
				if(visit[aaa]==0){
				q.push(aaa); visit[aaa]=1; dis[aaa]=dis[aa]+1;
				}
				
			}
		}
		
		if(q.empty())break;		
	}
	
	printf("%d",dis[k]);
	
	return 0;
}



