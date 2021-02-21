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

int a,b;
int visit [200002];
int dis [200002];
queue <int> q;
int dap;

void BFS(){
	
	int x=q.front(); q.pop();	
	if(x==b){
		dap=dis[b]; return;
	}
	for(int i=0;i<2;i++){
		int xx;
		if(i==0){
			xx=x-1;
			if(xx<0) continue;
			int temp=xx;
			while(temp<=100000){
				if(visit[temp]==0){
					q.push(temp); visit[temp]=1; dis[temp]=dis[x]+1;	
				}
				temp*=2;
				if(temp==0) break;
			}
		}else if(i==1){
			xx=x+1;
			if(xx>100000) continue;
			int temp=xx;
			while(temp<=100000){
				if(visit[temp]==0){
					q.push(temp); visit[temp]=1; dis[temp]=dis[x]+1;
				}
				temp*=2;
				if(temp==0) break;
			}
		}
	}
	
	if(q.size()==0) return;
	
	BFS();
}

int main(){
	
	scanf("%d %d",&a,&b);
	
	int temp=a;
	while(temp<=100000){
		if(visit[temp]==0) q.push(temp); visit[temp]=1; dis[temp]=0;
		temp*=2;
		if(temp==0) break;
	}
	
	if(a==b){
		printf("0");
	}else if(a>b){
		printf("%d",a-b);
	}else{
		BFS();
		printf("%d",dap);
	}
	
	return 0;
}


