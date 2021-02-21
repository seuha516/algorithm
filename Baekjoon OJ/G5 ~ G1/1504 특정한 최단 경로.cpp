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

int INF=1<<30;

vector <pair <int,int> > v[1002];
int dis[1002];
int visit[1002];
priority_queue < pair<int,int> , vector <pair <int,int> > , greater <pair<int,int> > > pq;

long long dap1,dap2;

int main(){
	
	int n,m; scanf("%d %d",&n,&m);
	for(int i=0;i<m;i++){
		int a,b,c; scanf("%d %d %d",&a,&b,&c);
		v[a].push_back(pair<int,int>(b,c));
		v[b].push_back(pair<int,int>(a,c));
	}
	int t1,t2; scanf("%d %d",&t1,&t2);
	
	for(int i=1;i<=n;i++){
		if(i==1){
			dis[i]=0;
			pq.push(pair<int,int>(0,i));
		}else{
			dis[i]=INF;
			pq.push(pair<int,int>(INF,i));
		}
	}
	
	while(1){
		
		int pass=0; int min_num; int min_dis;
		while(1){
			if(pq.size()==0) break;
			min_num=pq.top().second; 
			min_dis=pq.top().first;
			pq.pop();
			if(visit[min_num]==0){
				pass=1; break;
			}
		}
		if(pass==0) break;
		visit[min_num]=1;
		
		for(int i=0;i<v[min_num].size();i++){
			dis[v[min_num][i].first]
			=min(dis[v[min_num][i].first],dis[min_num]+v[min_num][i].second);
			pq.push(pair<int,int>(dis[v[min_num][i].first],v[min_num][i].first));
		}
		
	}
	
	dap1+=dis[t1]; dap2+=dis[t2];
	
	for(int i=0;i<1002;i++){
		dis[i]=0;
		visit[i]=0;
	}

	while(pq.size()){
		pq.pop();
	}

	for(int i=1;i<=n;i++){
		if(i==t1){
			dis[i]=0;
			pq.push(pair<int,int>(0,i));
		}else{
			dis[i]=INF;
			pq.push(pair<int,int>(INF,i));
		}
	}
	
	while(1){
		
		int pass=0; int min_num; int min_dis;
		while(1){
			if(pq.size()==0) break;
			min_num=pq.top().second; 
			min_dis=pq.top().first;
			pq.pop();
			if(visit[min_num]==0){
				pass=1; break;
			}
		}
		if(pass==0) break;
		visit[min_num]=1;
		
		for(int i=0;i<v[min_num].size();i++){
			dis[v[min_num][i].first]
			=min(dis[v[min_num][i].first],dis[min_num]+v[min_num][i].second);
			pq.push(pair<int,int>(dis[v[min_num][i].first],v[min_num][i].first));
		}
		
	}
	
	dap1+=dis[t2]; dap2+=dis[n];


	for(int i=0;i<1002;i++){
		dis[i]=0;
		visit[i]=0;
	}

	while(pq.size()){
		pq.pop();
	}

	for(int i=1;i<=n;i++){
		if(i==t2){
			dis[i]=0;
			pq.push(pair<int,int>(0,i));
		}else{
			dis[i]=INF;
			pq.push(pair<int,int>(INF,i));
		}
	}
	
	while(1){
		
		int pass=0; int min_num; int min_dis;
		while(1){
			if(pq.size()==0) break;
			min_num=pq.top().second; 
			min_dis=pq.top().first;
			pq.pop();
			if(visit[min_num]==0){
				pass=1; break;
			}
		}
		if(pass==0) break;
		visit[min_num]=1;
		
		for(int i=0;i<v[min_num].size();i++){
			dis[v[min_num][i].first]
			=min(dis[v[min_num][i].first],dis[min_num]+v[min_num][i].second);
			pq.push(pair<int,int>(dis[v[min_num][i].first],v[min_num][i].first));
		}
		
	}
	
	dap1+=dis[n]; dap2+=dis[t1];
	
	long long dap=min(dap1,dap2);
	if(dap>=INF){
		printf("-1");
	}else{
		printf("%lld",dap);
	}

	
	return 0;
}


