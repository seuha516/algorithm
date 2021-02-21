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

vector<pair<int,int> >v[100002];

int main(){

	int n; scanf("%d",&n); 
	while(n--){
		int a; scanf("%d",&a);
		while(1){
			int b; scanf("%d",&b); if(b==-1) break;
			int c; scanf("%d",&c);
			v[a].push_back(pair<int,int>(b,c));
			v[b].push_back(pair<int,int>(a,c));
		}
	}
	queue<int>q; bool visit[100002]={0,}; int dis[100002]={0,};
	q.push(1); visit[1]=1;
	
	int mm=-1; int mmnum=-1;
	
	while(1){
		int x=q.front(); q.pop();
		if(mm<dis[x]){
			mm=dis[x]; mmnum=x;
		}
		for(int i=0;i<v[x].size();i++){
			int xx=v[x][i].first;
			if(!visit[xx]){
				q.push(xx); visit[xx]=1; dis[xx]=dis[x]+v[x][i].second;
			}			
		}
		if(q.empty()){
			break;
		}
	}
	
	for(int i=0;i<100002;i++){
		visit[i]=0; dis[i]=0;
	}
	
	q.push(mmnum); visit[mmnum]=1;
	
	mm=-1; mmnum=-1;
	
	while(1){
		int x=q.front(); q.pop();
		if(mm<dis[x]){
			mm=dis[x]; mmnum=x;
		}
		for(int i=0;i<v[x].size();i++){
			int xx=v[x][i].first;
			if(!visit[xx]){
				q.push(xx); visit[xx]=1; dis[xx]=dis[x]+v[x][i].second;
			}			
		}
		if(q.empty()){
			break;
		}
	}
	printf("%d",mm);
	
	return 0;
}
