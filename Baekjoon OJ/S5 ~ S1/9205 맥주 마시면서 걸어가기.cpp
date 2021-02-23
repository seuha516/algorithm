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

int arr[104][104];
int a[104];
int b[104];
bool visit[104];

queue <int> q;

int main(){	
	
	int t;
	scanf("%d",&t);
	
	while(t--){
		while(!q.empty()){
			q.pop();
		}
		
		int n; scanf("%d",&n);
		
		for(int i=0;i<104;i++){   
			a[i]=0; b[i]=0; visit[i]=false;
			for(int j=0;j<104;j++){
				arr[i][j]=0;
			}	
		}
		
		for(int i=0;i<n+2;i++){
			scanf("%d %d",a+i,b+i);			
			for(int j=0;j<i;j++){
				if(abs(a[i]-a[j])+abs(b[i]-b[j])<=1000){
					arr[i][j]=1;
					arr[j][i]=1;
				}
			}	
		}
		
		q.push(0); visit[0]=true;
		
		while(1){
			int x=q.front();
			q.pop();
			
			if(x==n+1){
				printf("happy\n"); break;
			}
			
			for(int i=0;i<n+2;i++){
				if(i==x){
					continue;
				}
				if(arr[i][x]&&!visit[i]){
					q.push(i); visit[i]=true;
				}
			}
			
			if(!q.size()){
				printf("sad\n"); break;
			}
		
		}		
	}
	
	return 0;
}


