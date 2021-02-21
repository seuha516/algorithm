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

int n;

int arr[103][103];
bool visit[103][103];

int x[4]={-1,1,0,0};
int y[4]={0,0,-1,1};

queue <int> q1; queue <int> q2;

int cango(int a,int b,int where){
	int aa=a+x[where]; int bb=b+y[where];
	if(aa<0||aa>n-1||bb<0||bb>n-1){
		return 0;
	}else{
		if(visit[aa][bb]||arr[aa][bb]!=arr[a][b]){
			return 0;
		}else{
			return 1;
		}
	}	
}

int main(){	
	
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		char t[105]; scanf("%s",t);
		for(int j=0;j<n;j++){
			if(t[j]=='R'){
				arr[i][j]=1;	
			}else if(t[j]=='G'){
				arr[i][j]=2;	
			}else if(t[j]=='B'){
				arr[i][j]=3;	
			}	
		}
	}
	
	int dap=0;
	
	while(1){
		
		int ok=0;
		
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(!visit[i][j]){
					dap++;
					q1.push(i); q2.push(j); ok=1; break;
				}
			}
			if(ok){
				break;
			}
		}
		
		if(q1.size()==0){
			break;
		}
	
		while(1){
			int a=q1.front(); int b=q2.front();
			
			q1.pop(); q2.pop();
			visit[a][b]=true;
			
			for(int i=0;i<4;i++){
				
				if(cango(a,b,i)){
					visit[a+x[i]][b+y[i]]=true;
					q1.push(a+x[i]); q2.push(b+y[i]);						
				}			
			}
			
			if(q1.size()==0){
				break;
			}
		}
	}
	
	printf("%d ",dap);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i][j]==2){
				arr[i][j]=1;
			}	
			visit[i][j]=false;
		}
	}
	
	dap=0;
	
	while(1){
		
		int ok=0;
		
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(!visit[i][j]){
					dap++;
					q1.push(i); q2.push(j); ok=1; break;
				}
			}
			if(ok){
				break;
			}
		}
		
		if(q1.size()==0){
			break;
		}
	
		while(1){
			int a=q1.front(); int b=q2.front();
			
			q1.pop(); q2.pop();
			visit[a][b]=true;
			
			for(int i=0;i<4;i++){
				if(cango(a,b,i)){
					visit[a+x[i]][b+y[i]]=true;
					q1.push(a+x[i]); q2.push(b+y[i]);	
				}			
			}
			if(q1.size()==0){
				break;
			}
		}
	}
	printf("%d",dap);
	return 0;
}


