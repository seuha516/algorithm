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

using namespace std;

vector <pair<int,int> > v[20002];
int dis[20002];
bool visit[20002];
priority_queue <pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > >  pq;

int main(){
	
	int vv,e,k;scanf("%d %d %d",&vv,&e,&k);
	
	for(int i=1;i<=vv;i++){
		if(i==k){
			pq.push(pair<int,int>(0,i));
			dis[i]=0;
		}else{
			pq.push(pair<int,int>(1<<30,i));
			dis[i]=1<<30;
		}
	}
	
	while(e--){
		int t1,t2,t3; scanf("%d %d %d",&t1,&t2,&t3);
		v[t1].push_back(pair<int,int>(t2,t3));
	}
	
	int min_node_num; int min_node_dis;
	while(1){
		
		min_node_num==-1; min_node_dis=1<<30;
		int ok=0;
		
		while(1){
			if(pq.size()==0)break;
			int aa=pq.top().first; int bb=pq.top().second; pq.pop();
			if(visit[bb])continue;
			ok=1;
			min_node_dis=aa;
			min_node_num=bb;
			break;
		} 
		
		if(ok==0||min_node_num==-1) break;
		visit[min_node_num]=1;
		
		for(int i=0;i<v[min_node_num].size();i++){
			dis[v[min_node_num][i].first]=
			min(dis[v[min_node_num][i].first],min_node_dis+v[min_node_num][i].second);
			pq.push(pair<int,int>(dis[v[min_node_num][i].first],v[min_node_num][i].first));
		}
	}
	for(int i=1;i<=vv;i++){
		if(dis[i]==1<<30){
			printf("INF\n");
		}else{
			printf("%d\n",dis[i]);
		}
	}
	
	return 0;
}

