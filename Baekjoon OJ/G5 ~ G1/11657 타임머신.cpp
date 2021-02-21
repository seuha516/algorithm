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

int main(){
	
	long long n,m; scanf("%lld %lld",&n,&m);
	vector <pair<long long,long long> >v[502];
		
	while(m--){
		long long a,b,c;scanf("%lld %lld %lld",&a,&b,&c);
		v[a].push_back(pair<long long,long long>(b,c));
	}

	long long dis[502]={0,};
	
	for(int j=1;j<=n;j++){
		dis[j]=14000000000;
	}dis[1]=0;
	
	
	bool minus_cycle=0; long long minusnum=-1;
	
	for(int u=0;u<n;u++){
		for(int i=1;i<=n;i++){
			for(int j=0;j<v[i].size();j++){					
				if(dis[v[i][j].first]>dis[i]+v[i][j].second){
					dis[v[i][j].first]=dis[i]+v[i][j].second;
					if(u==n-1){
						minus_cycle=1;
						minusnum=i;
					}
				}
			}
		}
	}
	
	if(minus_cycle){
		if(dis[minusnum]<2000000000){
			printf("-1"); return 0;
		}
	}
	for(int i=2;i<=n;i++){
		long long x=dis[i];
		if(x>=2000000000){
			x=-1;
		}
		printf("%lld\n",x);
	}

	
	return 0;	
}

