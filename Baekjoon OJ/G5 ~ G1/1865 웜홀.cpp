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
	
	int t;scanf("%d",&t);
	
	while(t--){
		
		int n,m,w; scanf("%d %d %d",&n,&m,&w);
		vector <pair<int,int> >v[502];
		
		while(m--){
			int a,b,c;scanf("%d %d %d",&a,&b,&c);
			v[a].push_back(pair<int,int>(b,c));
			v[b].push_back(pair<int,int>(a,c));
		}
		while(w--){
			int a,b,c;scanf("%d %d %d",&a,&b,&c);
			v[a].push_back(pair<int,int>(b,(-1)*c));
		}
		int dis[502]={0,};
			for(int j=1;j<=n;j++){
				dis[j]=1<<30;
		}dis[1]=0;
		
		
		bool minus_cycle=0;
		
		for(int u=0;u<n;u++){
		
			for(int i=1;i<=n;i++){
				for(int j=0;j<v[i].size();j++){
					if(dis[v[i][j].first]>dis[i]+v[i][j].second){
						dis[v[i][j].first]=dis[i]+v[i][j].second;
						if(u==n-1){
							minus_cycle=1;
						}
					}						
				}
			}
		}
		
		if(minus_cycle){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	
	
	return 0;	
}



