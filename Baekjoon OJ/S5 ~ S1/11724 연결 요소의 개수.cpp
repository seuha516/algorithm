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
	
int arr[1005][1005];
bool visit[1005];

queue <int> q;

int main(){	
	
	int n, m; scanf("%d %d",&n,&m);
	
	for(int i=0;i<m;i++){
		int t1,t2; scanf("%d %d",&t1,&t2);
		arr[t1][t2]=1; arr[t2][t1]=1;	
	}
	
	int dap;
	dap=0;
	while(1){
		int next=-1; 
		for(int i=1;i<=n;i++){
			if(!visit[i]){
				next=i; dap++; break;
			}
		}
		if(next==-1){
			break;
		}
		q.push(next); visit[next]=true;
		while(1){
			int aa=q.front(); q.pop();
			
			for(int i=1;i<=n;i++){
				if(!visit[i]&&arr[aa][i]){
					q.push(i); visit[i]=true;
				}
			}
			if(q.size()==0){
				break;
			}
		}
	}
	
	printf("%d",dap);
	
	return 0;
}



