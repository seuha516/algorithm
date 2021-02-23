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

using namespace std;
	
int arr[1002];
int dis[1002];
bool visit[1002];

int main(){	

	int n;scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%d",arr+i);
	}
	
	if(n==1){
		printf("0"); return 0;
	}
	
	queue <int> q;
	q.push(0); visit[0]=true;
	
	dis[n-1]=-1;
	
	while(1){
		
		int x=q.front(); q.pop();
		
		if(x==n-1){
			break;
		}
		
		
		for(int i=1;i<=arr[x];i++){
			if(x+i>n-1){
				continue;
			}
			if(!visit[x+i]){
				
				q.push(x+i);
				visit[x+i]=1;
				dis[x+i]=dis[x]+1;
			}
		}
		
		if(q.empty()){
			break;
		}
		
	}
	printf("%d",dis[n-1]);
	
	return 0;
}




