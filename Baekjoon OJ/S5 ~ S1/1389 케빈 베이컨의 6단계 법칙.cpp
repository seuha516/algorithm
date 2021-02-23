#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <queue>

using namespace std;

int fri[101][101];
bool visit[101];

int main() {
	
	
	for(int i=0;i<101;i++){
		for(int j=0;j<101;j++){
			fri[i][j]=0;
		}
	}
	
	int n;
	int linesoo; scanf("%d %d",&n,&linesoo);
	for(int i=0;i<linesoo;i++){
		int a,b; scanf("%d %d",&a,&b);
		for(int x=1;1;x++){
			if(fri[a][x]==0){
				fri[a][x]=b;break;
			}
		}	
		for(int x=1;1;x++){
			if(fri[b][x]==0){
				fri[b][x]=a;break;
			}
		}
	}
	
	int kevinsoo[101]={0};
	int maxkevinsoo=pow(2,30);
	int dap;
	
	for(int i=1;i<=n;i++){
		for(int tt=0;tt<101;tt++){
			visit[tt]=false;
		}
		visit[i]=true; 
		queue <int> q;
		int distance[101]={0,};
		int gijoon=i; 
		q.push(i);
		
		int kevin=0;
		
		while(1){
			q.pop();
			
			for(int y=1;fri[gijoon][y]!=0;y++){
				
				int hi=fri[gijoon][y];
				
				if (visit[hi]==true){ 
					continue;
				}
				
				visit[hi]=true; 
				q.push(hi);
				distance[hi]=distance[gijoon]+1;
				kevin+=distance[hi];
			}
			
			if(q.size()==0){
				break;
			}
			gijoon=q.front();
		}
			
		kevinsoo[i]=kevin;
		if(maxkevinsoo>kevinsoo[i]){
			dap=i;
			maxkevinsoo=min(maxkevinsoo,kevinsoo[i]);
		}
		
		
	}
	printf("%d",dap);
	
	
	return 0;
}
