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

using namespace std;

int main() {
	
	int n,k; scanf("%d %d",&n,&k);
	
	bool visit [300000];
	int d [300000]={0,};
	
	queue <int> q;
	q.push(n);

	int m=pow(2,30);
	
	while(1){
		
		int now=q.front();
		q.pop();
		m=min(m,d[now]);
		visit[now]=true;
		if(k==now){
			break;
		}

		if(now<=100000){
			if(!visit[now+1]){
				q.push(now+1); 
				if(d[now+1]==0){
					d[now+1]=d[now]+1;
				}
			}
		}
		
		if(now>=1){
			if(!visit[now-1]){
				q.push(now-1);
				if(d[now-1]==0){
					d[now-1]=d[now]+1;	
				} 
			}
		}
		
		if(now<50001){
			if(!visit[now*2]){
				q.push(now*2);
				if(d[now*2]==0){
					d[now*2]=d[now]+1;
				} 
			}
		}
		
		if(!q.size()){
			break;
		}
		
	}	
	printf("%d",d[k]);
	
	return 0;
}
