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

vector <pair<long long,long long> >v[1002];

int main(){

	long long n,m; scanf("%lld %lld",&n,&m);
	while(m--){
		long long a,b,c; scanf("%lld %lld %lld",&a,&b,&c);
		v[a].push_back(pair<long long,long long>(b,c));
	}
	long long st,end; scanf("%lld %lld",&st,&end);
	
	long long dis[1002];
	for(int i=1;i<=n;i++){
		dis[i]=1<<30;
	}dis[st]=0;
	
	vector <long long> how[1002];
	how[st].push_back(st);
	
	priority_queue <long long, vector<long long>, greater<long long> > q;
	q.push(st);
	
	while(1){
		
		long long x=q.top(); q.pop();
		
		for(int i=0;i<v[x].size();i++){
			long long xx=v[x][i].first;
			long long length=v[x][i].second;
			
			
			if(dis[x]+length<dis[xx]){
				dis[xx]=dis[x]+length;
				while(!how[xx].empty()){
					how[xx].pop_back();
				}
				for(int j=0;j<how[x].size();j++){
					how[xx].push_back(how[x][j]);
				}
				how[xx].push_back(xx);
				q.push(xx);
			}
			
		}
		
		if(q.empty()) break;
		
	}
	
	printf("%lld\n%lld\n",dis[end],how[end].size());
	for(int i=0;i<how[end].size();i++){
		printf("%d ",how[end][i]);
	}

	return 0;	
}

